/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Suggestions/SGTQueryGenius.h>

@class ABAddressBook, NSMutableDictionary, NSString, NSArray;

@interface SGTMailQueryGenius : SGTQueryGenius {

	ABAddressBook* ab;
	NSMutableDictionary* imageCache;
	NSMutableDictionary* uniqueIDToLoader;
	char contentSearchEnabled;
	NSString* contentSearchDisabledExplanation;
	NSArray* mailboxList;
	NSArray* mailFlagColors;
	NSArray* mailPriorities;
	NSArray* mailAccountPaths;

}

@property (getter=isContentSearchEnabled) char contentSearchEnabled; 
@property (copy) NSString * contentSearchDisabledExplanation; 
@property (copy) NSArray * mailAccountPaths; 
@property (copy) NSArray * mailboxList; 
@property (copy) NSArray * mailFlagColors; 
@property (copy) NSArray * mailPriorities; 
+(id)didYouMeanCategory;
+(id)tokenTitleForScope:(long long)arg1 suggestion:(id)arg2 ;
+(id)_attributeToScope;
+(id)subjectCategory;
+(id)peopleAttributes;
+(char)attributesRepresentsAPerson:(id)arg1 ;
+(id)peopleCategoryForRecipients;
+(id)peopleCategory;
+(id)subjectCategoryWhenContentIsDisabled;
-(id)suggestionForPerson:(id)arg1 ;
-(id)suggestionForUnknownPersonWithName:(id)arg1 address:(id)arg2 ;
-(void)_clearImageCache;
-(id)init;
-(void)dealloc;
-(id)identifier;
-(void)_registerSuggester:(id)arg1 ;
-(char)attributeName:(id)arg1 isValidForScope:(long long)arg2 ;
-(long long)_fallbackScope;
-(id)allAttributeNamesForSuggestion:(id)arg1 ;
-(id)scopesForAttributeNames:(id)arg1 ;
-(id)displayNameForScope:(long long)arg1 ;
-(long long)scopeForAttributeName:(id)arg1 ;
-(id)suggestionFromPropertyList:(id)arg1 ;
-(id)rawQueryStringFromInputString:(id)arg1 ;
-(id)overridenAttributes;
-(id)filterQueryStringForSuggestions:(id)arg1 ;
-(void)postProcessSuggestions:(id)arg1 inCategory:(id)arg2 ;
-(char)offerDidYouMeanSuggestion;
-(void)suggester:(id)arg1 willStartSearchingSuggestionsForInput:(id)arg2 ;
-(void)suggester:(id)arg1 willStartProcessingResultsForInput:(id)arg2 ;
-(id)suggester:(id)arg1 additionalSuggestionsForInput:(id)arg2 ;
-(id)suggester:(id)arg1 filterSuggestion:(id)arg2 fromItem:(id)arg3 forInput:(id)arg4 ;
-(id)suggester:(id)arg1 filterSuggestions:(id)arg2 forInput:(id)arg3 ;
-(void)suggesterBecomesIdle:(id)arg1 ;
-(id)scopeMenuForSuggestion:(id)arg1 ;
-(id)imageForSuggestion:(id)arg1 ;
-(id)_shorterDisplayNameForSuggestion:(id)arg1 ;
-(id)representedObjectFromPropertyList:(id)arg1 ;
-(id)propertyListForRepresentedObject:(id)arg1 ;
-(id)_initialForName:(id)arg1 ;
-(id)_personForSuggestion:(id)arg1 ;
-(id)_shorterNameWithFirstName:(id)arg1 middleName:(id)arg2 lastName:(id)arg3 nickName:(id)arg4 fullName:(id)arg5 ;
-(char)isContentSearchEnabled;
-(NSString *)contentSearchDisabledExplanation;
-(void)setMailboxList:(NSArray *)arg1 ;
-(void)setMailFlagColors:(NSArray *)arg1 ;
-(void)setMailPriorities:(NSArray *)arg1 ;
-(void)_scheduleCacheClear;
-(NSArray *)mailAccountPaths;
-(void)setMailAccountPaths:(NSArray *)arg1 ;
-(NSArray *)mailboxList;
-(NSArray *)mailFlagColors;
-(NSArray *)mailPriorities;
-(id)mailFlagColorRepresentedObjectForSuggestion:(id)arg1 ;
-(id)mailPriorityRepresentedObjectForSuggestion:(id)arg1 ;
-(id)mailboxRepresentedObjectsForSuggestion:(id)arg1 ;
-(id)suggestionForSubject:(id)arg1 ;
-(void)setContentSearchEnabled:(char)arg1 ;
-(void)setContentSearchDisabledExplanation:(NSString *)arg1 ;
@end

