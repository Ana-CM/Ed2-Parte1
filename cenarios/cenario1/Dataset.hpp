//#include <string>

using namespace std;
#pragma once

class Dataset  
{
	private:
		long long int id;
		int publicationPlace, ratingCount;
		string authors, bestsellersRank, categories, description, edition, editionStatement, forAges, isbn10, isbn13, publisher, 
		title, format, illustrationsNote, imprint, indexDate, lang, publicationDate, url;
		float dimensionZ, dimensionX, dimensionY, weight, ratingAvg;
		
	public:

		Dataset();
		~Dataset();

		void setAuthors(string authors);
		string getAuthors();
		void setCategories(string categories);
		void setBestsellersRank(string bestsellersRank);

		void setId(string id);
		long long int getId();
		void setPublicationPlace(string publicationPlace);
		void setRatingCount(string ratingCount);
		void setDescription(string description);
		void setEdition(string edition);
		void setEditionStatement(string editionStatement);
		void setForAges(string forAges);
		void setIsbn10(string isbn10);
		void setIsbn13(string isbn13);
		void setPublisher(string publisher);
		void setTitle(string title);
		void setFormat(string format);
		void setIllustrationsNote(string illustrationsNote);
		void setImprint(string imprint);
		void setIndexDate(string indexDate);
		void setLang(string lang);
		void setPublicationDate(string publicationDate);
		void setUrl(string url);
		void setDimensionZ(string dimensionZ );
		void setDimensionY(string dimensionY);
		void setDimensionX(string dimensionX);
		void setWeight(string weight);
		void setRatingAvg(string ratingAvg);

};


