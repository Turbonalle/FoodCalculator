#define types 3

typedef struct vegetable
{
	char	*type;
	int		price_per_kilo;
	int		a_vitamin_mg;
	int		b_vitamin_mg;
	int		c_vitamin_mg;
	int		iron_mg;
}			vegetable;

void init_values(vegetable *vegetables[])
{
	int i;

	i = 0;
	vegetables[i]->type				= "carrot";
	vegetables[i]->price_per_kilo	= 2;
	vegetables[i]->a_vitamin_mg		= 100;
	vegetables[i]->b_vitamin_mg		= 200;
	vegetables[i]->c_vitamin_mg		= 300;
	vegetables[i]->iron_mg			= 100;
	i++;
	vegetables[i]->type				= "cucumber";
	vegetables[i]->price_per_kilo	= 3;
	vegetables[i]->a_vitamin_mg		= 200;
	vegetables[i]->b_vitamin_mg		= 100;
	vegetables[i]->c_vitamin_mg		= 100;
	vegetables[i]->iron_mg			= 0;
	i++;
	vegetables[i]->type				= "tomato";
	vegetables[i]->price_per_kilo	= 5;
	vegetables[i]->a_vitamin_mg		= 200;
	vegetables[i]->b_vitamin_mg		= 200;
	vegetables[i]->c_vitamin_mg		= 400;
	vegetables[i]->iron_mg			= 50;
}

void init_vegetables(vegetable *vegetables[])
{
	vegetable carrot;
	vegetable cucumber;
	vegetable tomato;
	int i;
	
	i = 0;
	vegetables[i++] = &carrot;
	vegetables[i++] = &cucumber;
	vegetables[i++] = &tomato;
}

int main()
{
	vegetable vegetables[types];

	// Initialize vegetable info
	init_vegetables(&vegetables); init_values(&vegetables);

	// Ask user about food intake, show nutrition result
	get_food_input(); show_result();

	// Ask user about nutrition needs, show how much needs to be eaten
	get_nutrition_needs(); show_amount();
	return (0);
}