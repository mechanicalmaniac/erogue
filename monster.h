/* Defining abbreviation macros for primary stats */
#define STR 0 /* physical strength */
#define DEX 1 /* deftness, FINE motor skills */
#define AGI 2 /* litheness, GROSS motor skills */
#define END 3 /* general health and endurance, including "endurance" */
#define INT 4 /* ability to think and perform complex tasks */
#define CHR 5 /* conventional attractiveness */
#define SEN 6 /* perception and sensitivity */
#define WIL 7 /* mental fortitude and grasp of one's own dignity */

#define FEMALE 0;
#define MALE 1;
#define NEUTER 2;
#define TUMBLR 3;   /* bug indicator */

struct stat {
    int max;
    int cur;
};

/* Struct representing the broad monster category, including genus-wide
 * abilities, resistances/weaknesses, and monster glyph.*/
struct genus {

};

/* Struct representing a specific species of monster. */
struct species {
    char name[16];              /* name of monster species */


};


struct monst {
    struct monst *mindex;       /* index pointer for unique monster */
    int mx, my;                 /* where the monster is */
    int mux, muy;               /* where the monster thinks YOU are */
    struct stat sbm[8];         /* statblock for primary stat bonuses */
    
    /* monster profile information */
    char name[16];              /* unique monster title */
    int hdmod;                  /* monster power level modifier */

    /* secondary stats, derived from primary stats: */
    struct stat hp;             /* hit points */

};

#define spawnmon() (struct monst *) alloc(sizeof(struct monst))
