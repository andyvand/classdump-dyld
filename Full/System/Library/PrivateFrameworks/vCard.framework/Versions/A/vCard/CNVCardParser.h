/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CNVCardParsedResultBuilder;
@class CNVCardLexer, NSData, CNVCardDateComponentsParser, CNVCardSelectorMap, NSString, NSDateComponents, NSMutableArray, NSMutableString, NSMutableDictionary, NSArray;

@interface CNVCardParser : NSObject {

	CNVCardLexer* _lexer;
	NSData* _data;
	unsigned long long _defaultEncoding;
	char _hasImportErrors;
	CNVCardDateComponentsParser* _dateComponentsParser;
	CNVCardSelectorMap* _parsingSelectorMap;
	CNVCardSelectorMap* _parameterSelectorMap;
	id<CNVCardParsedResultBuilder> _resultBuilder;
	char _30vCard;
	NSString* _first;
	NSString* _last;
	NSString* _org;
	NSString* _formattedName;
	NSDateComponents* _bday;
	NSDateComponents* _altBday;
	NSMutableArray* _emails;
	NSMutableArray* _dateComponents;
	NSMutableArray* _phones;
	NSMutableArray* _addresses;
	NSMutableArray* _relatedNames;
	NSMutableArray* _urls;
	NSMutableArray* _calendarURIs;
	NSMutableString* _notes;
	NSMutableDictionary* _extensions;
	NSMutableArray* _unknowns;
	NSString* _uid;
	NSString* _carddavUID;
	NSMutableArray* _instantMessagingAddresses;
	NSMutableArray* _socialProfiles;
	NSMutableDictionary* _activityAlerts;
	NSMutableArray* _cropRects;
	char _fullNameHasZeroLength;
	NSData* _imageData;
	NSString* _imageGroup;
	NSString* _imageReference;
	NSArray* _itemParameters;
	NSString* _grouping;
	unsigned long long _encoding;
	char _quotedPrintable;
	char _base64;

}
+(unsigned long long)inferredStringEncodingFromData:(id)arg1 ;
+(id)newParsingSelectorMap;
+(id)newParameterSelectorMap;
+(id)parseData:(id)arg1 resultFactory:(id)arg2 ;
+(char)parseFirstResultInData:(id)arg1 resultBuilder:(id)arg2 ;
-(id)nextBase64Data;
-(char)atEOF;
-(id)parseRemainingLine;
-(id)parseStringValue;
-(char)advancePastSemicolon;
-(id)firstValueForKey:(id)arg1 inExtensionGroup:(id)arg2 ;
-(id)firstParameterWithName:(id)arg1 ;
-(char)parseNextResultUsingResultBuilder:(id)arg1 ;
-(char)parse_ADD;
-(char)parse_ADR;
-(char)parse_BDAY;
-(char)parse_CALURI;
-(char)parse_EMAIL;
-(char)parse_FN;
-(char)parse_IMPP;
-(char)parse_N;
-(char)parse_NICKNAME;
-(char)parse_NOTE;
-(char)parse_ORG;
-(char)parse_PHOTO;
-(char)parse_PRODID;
-(char)parse_REV;
-(char)parse_TEL;
-(char)parse_TITLE;
-(char)parse_UID;
-(char)parse_URL;
-(char)parse_VERSION;
-(char)parse_X_ABADR;
-(char)parse_X_ABDATE;
-(char)parse_X_ABLABEL;
-(char)parse_X_ABORDER;
-(char)parse_X_ABPHOTO;
-(char)parse_X_AIM;
-(char)parse_X_AIM_ID;
-(char)parse_X_ABRELATEDNAMES;
-(char)parse_X_ABSHOWAS;
-(char)parse_X_ABUID;
-(char)parse_X_ACTIVITY_ALERT;
-(char)parse_X_ALTBDAY;
-(char)parse_X_GOOGLE_ID;
-(char)parse_X_GTALK;
-(char)parse_X_ICQ;
-(char)parse_X_ICQ_ID;
-(char)parse_X_JABBER;
-(char)parse_X_JABBER_ID;
-(char)parse_X_MAIDENNAME;
-(char)parse_X_MSN;
-(char)parse_X_MSN_ID;
-(char)parse_X_PHONETIC_FIRST_NAME;
-(char)parse_X_PHONETIC_LAST_NAME;
-(char)parse_X_PHONETIC_MIDDLE_NAME;
-(char)parse_X_QQ;
-(char)parse_X_QQ_ID;
-(char)parse_X_SKYPE;
-(char)parse_X_SKYPE_ID;
-(char)parse_X_SOCIALPROFILE;
-(char)parse_X_YAHOO;
-(char)parse_X_YAHOO_ID;
-(char)parse_X_ADDRESSBOOKSERVER_PHONEME_DATA;
-(void)parameter_QUOTED_PRINTABLE:(id)arg1 ;
-(void)parameter_BASE64:(id)arg1 ;
-(void)parameter_CHARSET:(id)arg1 ;
-(void)parameter_ENCODING:(id)arg1 ;
-(id)nextResultWithFactory:(id)arg1 progressLength:(long long*)arg2 ;
-(id)pool_nextResultWithFactory:(id)arg1 progressLength:(long long*)arg2 ;
-(char)parseLine;
-(void)reportValues;
-(void)cleanUpCardState;
-(id)parseParameters;
-(SEL)parsingSelectorForTag:(id)arg1 ;
-(char)parseValueUsingSelector:(SEL)arg1 ;
-(id)parseUnknownValueStartingAtPosition:(unsigned long long)arg1 ;
-(id)makeLineWithValue:(id)arg1 forProperty:(id)arg2 ;
-(char)parseInstantMessageValueWithService:(id)arg1 ;
-(void)reportValue:(id)arg1 forProperty:(id)arg2 ;
-(id)parseArrayValue;
-(id)firstValueForKey:(id)arg1 inExtension:(id)arg2 ;
-(id)parameterValuesForName:(id)arg1 ;
-(id)genericLabelForProperty:(id)arg1 ;
-(id)makeLineWithLabel:(id)arg1 value:(id)arg2 ;
-(id)nextParameterInCurrentLine;
-(SEL)handlerSelectorForParameterName:(id)arg1 ;
-(id)parseParameterValues;
-(void)processNameValues;
-(void)processExtensionValues;
-(void)reportMultiValueLines:(id)arg1 forProperty:(id)arg2 ;
-(char)valueIsEmpty:(id)arg1 ;
-(id)fallbackLabelForProperty:(id)arg1 ;
-(id)phoneLabel;
-(id)typeParameters;
-(id)firstCustomLabelForProperty:(id)arg1 types:(id)arg2 ;
-(char)hasImportErrors;
-(id)parseBase64Data;
-(char)parseExtension:(id)arg1 ;
-(id)resultsWithFactory:(id)arg1 ;
-(id)validCountryCodes;
-(long long)currentPosition;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
@end

