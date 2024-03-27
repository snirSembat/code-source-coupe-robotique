#ifndef CHRONO_HPP
#define CHRONO_HPP

class Chrono {
    public:
        Chrono();
        void start()const;
        void stop();
        void reset();
        unsigned long getTempsEcoule()const;
        unsigned long getTempsRestant()const;

    private:
        static unsigned long tempsInitial;
        static unsigned long tempsRestant;

};

#endif