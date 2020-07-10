#include "Dataset.hpp"  
/*#include <string>
using namespace std;*/

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

void Dataset::setId(int id){
     this->id = id;
}

void Dataset::setPublicationPlace(int publicationPlace){
     this->publicationPlace = publicationPlace;
}

void Dataset::setRatingCount(int ratingCount){
     this->ratingCount = ratingCount;
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

void Dataset::setDimensionZ(float dimensionZ ){
     this->dimensionZ = dimensionZ;
}

void Dataset::setDimensionY(float dimensionY){
     this->dimensionY = dimensionY;
}

void Dataset::setDimensionX(float dimensionX){
     this->dimensionX = dimensionX;
}

void Dataset::setWeight(float weight){
     this->weight = weight;
}

void Dataset::setRatingAvg(float ratingAvg){
     this->ratingAvg = ratingAvg;
}