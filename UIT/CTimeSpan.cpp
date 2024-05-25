#include"CTimeSpan.hpp"

using namespace std;
CTimeSpan::CTimeSpan() {
    this->h = 0;
    this->m = 0;
    this->s = 0;
}

CTimeSpan::CTimeSpan(int H, int M, int S) : h{ H }, m{ M }, s{ S } {}

CTimeSpan::~CTimeSpan() {}

long long   CTimeSpan::Total() { return this->h * 3600 + this->m * 60 + this->s; }
int         CTimeSpan::getH() { return this->h; }
int         CTimeSpan::getM() { return this->m; }
int         CTimeSpan::getS() { return this->s; }
void        CTimeSpan::setH(int H) { this->h = H; }
void        CTimeSpan::setM(int M) { this->m = M; }
void        CTimeSpan::setS(int S) { this->s = S; }

CTimeSpan CTimeSpan::operator+(CTimeSpan& span) {
    CTimeSpan result;

    result.setS(result.getS() + span.getS());
    while (result.getS() >= 60) {
        result.setS(result.getS() - 60);
        result.setM(result.getM() + 1);
    }

    result.setM(result.getM() + span.getM());
    while (result.getM() >= 60) {
        result.setM(result.getM() - 60);
        result.setH(result.getH() + 1);
    }

    result.setH(result.getH() + span.getH());

    return result;
}

CTimeSpan CTimeSpan::operator-(CTimeSpan& span) {
    CTimeSpan result;
    result.setS(result.getS() - span.getS());
    if (result.getS() < 0) {
        result.setS(result.getS() + 60);
        result.setM(result.getM() - 1);
    }

    result.setM(result.getM() - span.getM());
    if (result.getM() < 0) {
        result.setM(result.getM() + 60);
        result.setH(result.getH() - 1);
    }

    result.setH(result.getH() - span.getH());

    return result;
}

bool CTimeSpan::operator==(CTimeSpan& span) { return (this->Total() == span.Total()); }
bool CTimeSpan::operator!=(CTimeSpan& span) { return (this->Total() != span.Total()); }
bool CTimeSpan::operator> (CTimeSpan& span) { return (this->Total() > span.Total()); }
bool CTimeSpan::operator>=(CTimeSpan& span) { return (this->Total() >= span.Total()); }
bool CTimeSpan::operator< (CTimeSpan& span) { return (this->Total() < span.Total()); }
bool CTimeSpan::operator<=(CTimeSpan& span) { return (this->Total() <= span.Total()); }


istream& operator>>(istream& in, CTimeSpan& span) {
    in >> span.h >> span.m >> span.s;

    return in;
}

ostream& operator<<(ostream& out, CTimeSpan& span) {
    while (span.s >= 60) {
        span.setS(span.s - 60);
        span.setM(span.m + 1);
    }

    while (span.m >= 60) {
        span.setM(span.m - 60);
        span.setH(span.h + 1);
    }

    out << span.h << ":" << span.m << ":" << span.s;

    return out;
}

int main() {

    return 0;
}