#define CYLINDER_REQUESTS 1000
#define CYLINDER_COUNT 5000

void sort_requests(int* requests);
int find_starting_bound(int* requests, int start_pos);
int get_bound(int* requests, int index, int value);

int fcfs(int start_pos, int* requests);
int sstf(int start_pos, int* requests);
int scan(int start_pos, int* requests);

#define max(x,y) ((x) >= (y)) ? (x) : (y)
#define min(x,y) ((x) <= (y)) ? (x) : (y)
