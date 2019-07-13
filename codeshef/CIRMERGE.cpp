struct node
{
    ll value;
    struct node *next;
    struct node *prev;
};

class cq {
public: 
    int size;
    struct node *head;
    struct node *rear;

    cq();
    void append(ll);
    void query(int, ll);
    void deleteNode(int);
    void insert(int, ll);
    ll &operator[] (int);
    void print();
};

cq::cq() {
    size = 0;
    head = nullptr;
    rear = nullptr;
}

void cq::append(ll c) {
    struct node *temp = (struct node*) malloc(sizeof(struct node));
    if (!size) {
        this->head = temp; this->rear = temp;
    }
    temp->value = c;
    temp->next = this->head;
    this->rear->next = temp;
    this->rear = temp;
    this->size++;
}

void cq::deleteNode(int index) {
    if (!index) {
        struct node *ptr = this->rear, *tmp;
        tmp = this->head;
        this->head = tmp->next;
        ptr->next = tmp->next;
        this->size--;
        free(tmp);
    }
    else {
        struct node *ptr = this->head, *tmp; 
        while(index-- > 1) ptr = ptr->next;
        tmp = ptr->next;
        ptr->next = tmp->next;
        this->size--;
        free(tmp);
    }
    // message("After Deleting ");this->print();
}

void cq::insert(int index, ll value) {
    if (!index) {
        this->append(value);
    } else {
        struct node *ptr = this->head; 
        while(index-- > 1) ptr = ptr->next;
        struct node *temp = (struct node*) malloc(sizeof(struct node));
        temp->value = value;
        temp->next = ptr->next;
        ptr->next = temp;
        this->size++;
    }
    // message("After Inserting "); this->print();
}

void cq::query(int index, ll value) {
    int i1 = index % this->size, i2 = (index + 1) % this->size;

    if (i1 > i2) { 
        this->deleteNode(i1); this->deleteNode(i2);
        this->insert(i2, value);
    } else {
        this->deleteNode(i2); this->deleteNode(i1);
        this->insert(i1, value);
    }
}

ll &cq::operator[] (int index) {
    struct node *ptr = this->head; 
    while(index--) ptr = ptr->next;
    return ptr->value;
}

void cq::print(){
    struct node *ptr = this->head; int count = this->size;
    while(count--) {
        cout << ptr->value << " ";
        ptr = ptr->next;
    }
}


int main() {
    int TC, N; ll t, p, mn; scanf("%d", &TC);

    while (TC--) {
        cq s; p = 0; scanf("%d", &N); 

        FOR(i, 0, N) {scanf("%lld", &t); s.append(t);}


        FOR(j, 0, N - 1) {

            mn = LONG_MAX; int index; t = 0;

            
            FOR(i, 0, s.size) {
                t = s[i] + s[i  + 1];
                if (mn > t) { mn = t; index = i; }
            }

            p += mn;

            s.query(index, mn);
        }
        s.print();

        printf("%lld\n", p);
    }

    return 0;
}






























// int main() {
//     int TC, N, f, s, n; scanf("%d", &TC);
//     ll p, tmp, mi;

//     while(TC--) {
//         scanf("%d", &N); vector <ll> a(N); p = 0; n = N -1;

//         FOR(i, 0, N) scanf("%lld", &a[i]);

//         FOR(i, 0, n) {

//             mi = LONG_MAX; f = 0; s = 1; N = a.size();

//             FOR(j, 0, a.size()) {
//                 tmp = a[j] + a[(j + 1) % a.size()];
//                 if (tmp < mi) { mi = tmp; f = j; s = (j + 1) % a.size(); }
//             }
            
//             // printf("%lld\n", mi);
            
//             p += mi;

//             if(!s) {
//                 a.erase(a.begin() + f);
//                 a.erase(a.begin() + s);
//                 a.insert(a.begin(), mi);
//             } else {
//                 a.erase(a.begin() + s);
//                 a.erase(a.begin() + f);
//                 a.insert(a.begin() + f, mi);
//             }

//         }

//         printf("%lld\n", p);

//     }
//     return 0;
// }