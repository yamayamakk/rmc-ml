extern "C"{
void aenet_init(int ntypes, char* atom_types[], int* stat);
void aenet_final(int* stat);
void aenet_load_potential(int type_id, char* filename, int* stat);

void aenet_print_info();


void aenet_atomic_energy_and_forces(double coo_i[3], int type_i, int index_i,
                                    int n_j, double coo_j[], int type_j[],
                                    int index_j[], int natoms, double* E_i,
                                    double F[], int* stat);
}

extern int aenet_nnb_max;
extern double aenet_Rc_max;

extern int aenet_sfb_ver;
