/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSArray, NSHashTable, SGTQueryGeniusReserved, NSString;

@interface SGTQueryGenius : NSObject {

	NSDictionary* shortNameToAttributes;
	NSArray* allAttributeNames;
	NSArray* scopeOrder;
	NSHashTable* registeredSuggesters;
	char usesSimpleTokens;
	void* q;
	SGTQueryGeniusReserved* _reserved;

}

@property (readonly) char usesSimpleTokens; 
@property (nonatomic,readonly) char offerDidYouMeanSuggestion; 
@property (readonly) NSString * identifier; 
@property (readonly) NSArray * allAttributeNames; 
@property (copy) NSArray * scopeOrder; 
+(id)geniusForMails;
+(id)geniusForFiles;
+(id)tokenImageForScope:(long long)arg1 suggestion:(id)arg2 ;
+(id)tokenTitleForScope:(long long)arg1 suggestion:(id)arg2 ;
+(id)_attributeToScope;
+(id)_tokenImageForScope:(long long)arg1 suggestion:(id)arg2 ;
+(id)_propertyListFromSuggestion:(id)arg1 identifier:(id)arg2 representedObjectAsPlist:(id)arg3 ;
+(id)uniquifierStringForSuggestion:(id)arg1 ;
+(id)scopeOrderForSentMailbox;
+(id)scopeOrderForRegularMailbox;
+(long long)_scopeFromAttributeName:(id)arg1 ;
+(void)setUniquifierString:(id)arg1 forSuggestion:(id)arg2 ;
-(id)propertyListFromSuggestion:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(NSString *)identifier;
-(id)initWithAttributeNames:(id)arg1 ;
-(void)_unregisterSuggester:(id)arg1 ;
-(void)_registerSuggester:(id)arg1 ;
-(id)_staticSuggestionDisplayNames;
-(id)_shorterDisplayNameForSuggestionWithCache:(id)arg1 ;
-(char)attributeName:(id)arg1 isValidForScope:(long long)arg2 ;
-(long long)_fallbackScope;
-(id)allAttributeNamesForSuggestion:(id)arg1 ;
-(id)scopesForAttributeNames:(id)arg1 ;
-(long long)defaultScopeForAttributeNames:(id)arg1 ;
-(id)displayNameForScope:(long long)arg1 ;
-(long long)scopeForAttributeName:(id)arg1 ;
-(id)queryStringForSuggestions:(id)arg1 ;
-(id)queryScopesForSuggestions:(id)arg1 ;
-(id)searchPhraseForSuggestions:(id)arg1 ;
-(id)suggestionForString:(id)arg1 ;
-(id)suggestionFromPropertyList:(id)arg1 ;
-(id)rawQueryStringFromInputString:(id)arg1 ;
-(char)usesSimpleTokens;
-(id)overridenAttributes;
-(id)filterQueryStringForSuggestions:(id)arg1 ;
-(id)searchStringForSuggestion:(id)arg1 ;
-(id)uniquifierStringForSuggestion:(id)arg1 inCategory:(id)arg2 ;
-(void)postProcessSuggestions:(id)arg1 inCategory:(id)arg2 ;
-(long long)_nextScopeForSuggestion:(id)arg1 ;
-(id)_searchPaths;
-(NSArray *)allAttributeNames;
-(char)offerDidYouMeanSuggestion;
-(void)suggester:(id)arg1 willStartSearchingSuggestionsForInput:(id)arg2 ;
-(void)suggester:(id)arg1 willStartProcessingResultsForInput:(id)arg2 ;
-(id)suggester:(id)arg1 additionalSuggestionsForInput:(id)arg2 ;
-(id)suggester:(id)arg1 filterSuggestion:(id)arg2 fromItem:(id)arg3 forInput:(id)arg4 ;
-(id)suggester:(id)arg1 filterSuggestions:(id)arg2 forInput:(id)arg3 ;
-(void)suggester:(id)arg1 didFinishProcessingResultsForInput:(id)arg2 ;
-(void)suggesterBecomesIdle:(id)arg1 ;
-(char)hasScopeMenuForSuggestion:(id)arg1 ;
-(char)hasMenuForSuggestion:(id)arg1 ;
-(id)scopeMenuForSuggestion:(id)arg1 ;
-(id)menuForSuggestion:(id)arg1 ;
-(id)imageForSuggestion:(id)arg1 ;
-(id)displayNameForSuggestionInMenu:(id)arg1 ;
-(void)setScopeOrder:(NSArray *)arg1 ;
-(NSArray *)scopeOrder;
-(id)_invalidScopeDisplayNameForScope:(long long)arg1 ;
-(id)_shorterDisplayNameForSuggestion:(id)arg1 ;
-(id)representedObjectFromPropertyList:(id)arg1 ;
-(id)propertyListForRepresentedObject:(id)arg1 ;
-(void)_waitForAttributeMappingToBeReady;
-(id)attributesForShortName:(id)arg1 ;
-(void)setScopeOrderWithScopes:(long long)arg1 ;
-(long long)fallbackScope;
-(id)_registeredSuggesters;
@end

