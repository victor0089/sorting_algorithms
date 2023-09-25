#ifndef DECK_H
#define DECK_H
#include <stdlib.h>

/**
 * enum kind_e - Enumerationcard suits.
 * @SPADE: Spadessuit.
 * @HEART: Heartssuit.
 * @CLUB: Clubssuit.
 * @DIAMOND: Diamondssuit.
 */
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/**
 * struct card_s - Playing card
 * @value: Value ofthecard
 * From "Ace" to "King"
 * @kind: Kind ofthecard
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 * struct deck_node_s - Deck of card
 *
 * @card: Pointer tothe cardof the node
 * @prev: Pointer tothe previousnode of the list
 * @next: Pointer tothe next nodeof the list
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);

#endif /* DECK_H */
