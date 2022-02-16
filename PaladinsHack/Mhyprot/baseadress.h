#pragma once
uint64_t GetProcessBase(int pid);
uint64_t GetProcessId(const char* process_name);
uint64_t GetProcessId();
bool IsValid(uint64_t adress);

bool read_raw(int pid, uint64_t address, void* buffer, size_t size);
bool write_raw(int pid, uint64_t address, void* buffer, size_t size);

template<typename T>
inline bool read(uint64_t address, T& value) {
	return read_raw(GetProcessId(), address, &value, sizeof(T));
}

template<typename T>
inline bool write(uint64_t address, const T& value) {
	if(IsValid(address)) {
		return write_raw(GetProcessId(), address, (void*)&value, sizeof(T));
	}
	return false;
}
template<typename T>
inline bool read_array(uint64_t address, T* array, size_t len) {
	return read_raw(GetProcessId(), address, array, sizeof(T) * len);
}

template<typename T>
inline T read(uint64_t address) {
	T buffer{ };
	if(IsValid(address)) {
		read(address, buffer);
	}
	return buffer;
}