#include "Dataset.hpp"  
#include <string>
using namespace std;

Dataset::Dataset()
{
 
}

Dataset::~Dataset()
{

}


void Dataset::setAuthors(string authors){
     this->authors = authors;
}

string Dataset::getAuthors(){
    return this->authors;
}

void Dataset::setCategories(string categories){
    this->categories = categories;
}

void Dataset::setBestsellersRank(string bestsellersRank){
     this->bestsellersRank = bestsellersRank ;
}

void Dataset::setId(string id){
     try{
          this->id = stoll(id);
     }catch(invalid_argument){
          this->id = 0;
     }
}

long long int Dataset::getId(){
    return this->id;
}

void Dataset::setPublicationPlace(string publicationPlace){
      try{
          this->publicationPlace = stoll(publicationPlace);
     }catch(invalid_argument){
          this->publicationPlace = 0;
     }
}

void Dataset::setRatingCount(string ratingCount){
     try{
          this->ratingCount = stoll(ratingCount);
     }catch(invalid_argument){
          this->ratingCount = 0;
     }
}

void Dataset::setDescription(string description){
     this->description = description;
}

void Dataset::setEdition(string edition){
     this->edition = edition;
}

void Dataset::setEditionStatement(string editionStatement){
     this->editionStatement = editionStatement;
}

void Dataset::setForAges(string forAges){
     this->forAges = forAges;
}

void Dataset::setIsbn10(string isbn10){
    this-> isbn10 = isbn10;
}

void Dataset::setIsbn13(string isbn13){
    this-> isbn13 = isbn13;
}

void Dataset::setPublisher(string publisher){
     this->publisher = publisher;
}

void Dataset::setTitle(string title){
     this->title = title;
}

string  Dataset::getTitle(){
     return this->title;
}

void Dataset::setFormat(string format){
     this->format = format;
}

void Dataset::setIllustrationsNote(string illustrationsNote){
     this->illustrationsNote = illustrationsNote;
}

void Dataset::setImprint(string imprint){
     this->imprint = imprint;
}

void Dataset::setIndexDate(string indexDate){
     this->indexDate = indexDate;
}

void Dataset::setLang(string lang){
     this->lang = lang;
}

void Dataset::setPublicationDate(string publicationDate){
     this->publicationDate = publicationDate;
}

void Dataset::setUrl(string url){
     url = "https://bookdepository.com" + url;
     this->url = url;
}

void Dataset::setDimensionZ(string dimensionZ ){
     try{
          this->dimensionZ = stof(dimensionZ);
     }catch(invalid_argument){
          this->dimensionZ = 0;
     }
}

void Dataset::setDimensionY(string dimensionY){
     try{
          this->dimensionY = stof(dimensionY);
     }catch(invalid_argument){
          this->dimensionY = 0;
     }
}

void Dataset::setDimensionX(string dimensionX){
     try{
          this->dimensionX = stof(dimensionX);
     }catch(invalid_argument){
          this->dimensionX = 0;
     }
}

void Dataset::setWeight(string weight){
     try{
          this->ratingAvg = stof(weight);
     }catch(invalid_argument){
          this->weight = 0;
     }
}

void Dataset::setRatingAvg(string ratingAvg){
     try{
          this->ratingAvg = stof(ratingAvg);
     }catch(invalid_argument){
          this->ratingAvg = 0;
     }
}