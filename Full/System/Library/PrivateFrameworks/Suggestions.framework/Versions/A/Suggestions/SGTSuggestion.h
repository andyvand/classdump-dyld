/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SGTSuggestionReserved, NSImage, NSString, NSArray, NSURL, SGTQueryGenius, NSIndexSet, SGTCategory;

@interface SGTSuggestion : NSObject {

	SGTSuggestionReserved* _reserved;

}

@property (readonly) NSImage * tokenImage; 
@property (readonly) NSString * tokenTitle; 
@property (readonly) NSImage * imageForMenu; 
@property (readonly) NSString * displayNameForMenu; 
@property (readonly) long long scopeForUI; 
@property (readonly) NSString * suggestionDebugDescription; 
@property (readonly) NSString * displayName; 
@property (readonly) NSArray * attributeNames; 
@property (readonly) NSArray * attributeValues; 
@property (retain) id representedObject; 
@property (retain) NSURL * spotlightScope; 
@property (assign) double score; 
@property (readonly) NSString * queryStringFragment; 
@property (retain) SGTQueryGenius * genius; 
@property (readonly) NSIndexSet * scopes; 
@property (assign) long long scope; 
@property (readonly) long long defaultScope; 
@property (retain) SGTCategory * category; 
@property (assign) char exactMatch; 
@property (retain) NSIndexSet * titleHighlights; 
@property (retain) NSIndexSet * uniquifierHighlights; 
@property (retain) NSString * inputString; 
@property (assign,nonatomic) char lastWordMatch; 
@property (nonatomic,readonly) unsigned long long alignmentScore; 
@property (assign,nonatomic) char intermediateResult; 
@property (assign,nonatomic) char forceLastPosition; 
@property (assign,nonatomic) char enforceStrictMatch; 
+(id)fuzzyAttributesSet;
+(id)queryStringForSuggestions:(id)arg1 ;
+(id)queryScopesForSuggestions:(id)arg1 ;
+(id)searchPhraseForSuggestions:(id)arg1 ;
+(id)keyPathsForValuesAffectingQueryStringFragment;
+(id)suggestionWithDisplayName:(id)arg1 ;
+(id)keyPathsForValuesAffectingSuggestionScopeDescription;
+(id)keyPathsForValuesAffectingTokenImage;
+(id)keyPathsForValuesAffectingTokenTitle;
+(id)keyPathsForValuesAffectingScopeForUI;
+(id)keyPathsForValuesAffectingSuggestionDebugDescription;
-(double)score;
-(NSArray *)attributeValues;
-(void)setScore:(double)arg1 ;
-(long long)scope;
-(void)setScope:(long long)arg1 ;
-(NSString *)inputString;
-(void)setInputString:(NSString *)arg1 ;
-(NSArray *)attributeNames;
-(id)_identifier;
-(void)dealloc;
-(id)description;
-(id)representedObject;
-(void)setRepresentedObject:(id)arg1 ;
-(NSString *)displayName;
-(SGTQueryGenius *)genius;
-(void)setGenius:(SGTQueryGenius *)arg1 ;
-(NSURL *)spotlightScope;
-(char)intermediateResult;
-(char)forceLastPosition;
-(char)enforceStrictMatch;
-(NSIndexSet *)titleHighlights;
-(NSIndexSet *)uniquifierHighlights;
-(unsigned long long)alignmentScore;
-(NSString *)queryStringFragment;
-(id)initWithDisplayName:(id)arg1 ;
-(id)initWithAttributeNames:(id)arg1 displayName:(id)arg2 values:(id)arg3 additionalAttributes:(id)arg4 representedObject:(id)arg5 score:(double)arg6 lastWordMatched:(char)arg7 ;
-(id)initWithAttributeNames:(id)arg1 displayName:(id)arg2 values:(id)arg3 additionalAttributes:(id)arg4 representedObject:(id)arg5 score:(double)arg6 lastWordMatched:(char)arg7 alignmentScore:(unsigned long long)arg8 ;
-(id)initWithAttributeNames:(id)arg1 displayName:(id)arg2 values:(id)arg3 additionalAttributes:(id)arg4 representedObject:(id)arg5 score:(double)arg6 ;
-(id)initWithAttributeNames:(id)arg1 displayName:(id)arg2 values:(id)arg3 additionalAttributes:(id)arg4 representedObject:(id)arg5 ;
-(char)attributeName:(id)arg1 isValidForScope:(long long)arg2 ;
-(id)_queryStringForAttributeName:(id)arg1 values:(id)arg2 ;
-(id)_queryStringForSuggestionUseRawQuery:(char)arg1 ;
-(id)_queryStringForAttributeNames:(id)arg1 values:(id)arg2 scope:(long long)arg3 ;
-(long long)defaultScope;
-(NSIndexSet *)scopes;
-(id)displayNameForScope:(long long)arg1 ;
-(long long)scopeForAttributeName:(id)arg1 ;
-(void)_setOriginalTypedString:(id)arg1 ;
-(id)_originalTypedString;
-(id)_shorterDisplayName;
-(void)_setUniquifierString:(id)arg1 ;
-(id)_uniquifierString;
-(void)_setShowsUniquifier:(char)arg1 ;
-(char)_showsUniquifier;
-(void)setTitleHighlights:(NSIndexSet *)arg1 ;
-(void)setUniquifierHighlights:(NSIndexSet *)arg1 ;
-(id)allAttributeValues;
-(id)valuesForAttributeWithName:(id)arg1 ;
-(void)setSpotlightScope:(NSURL *)arg1 ;
-(char)lastWordMatch;
-(void)setLastWordMatch:(char)arg1 ;
-(void)_setRawQueryString:(id)arg1 ;
-(id)_rawQueryString;
-(void)_setAdditionalRawQuery:(id)arg1 ;
-(void)_setAdditionalRawQueryIsOr:(char)arg1 ;
-(id)_additionalRawQuery;
-(char)_additionalRawQueryIsOr;
-(id)suggestionScopeDescription;
-(char)_shouldNotBeIncludedInRecents;
-(id)_propertyListRepresentation;
-(void)setIntermediateResult:(char)arg1 ;
-(void)setForceLastPosition:(char)arg1 ;
-(void)setEnforceStrictMatch:(char)arg1 ;
-(char)exactMatch;
-(void)setExactMatch:(char)arg1 ;
-(NSString *)displayNameForMenu;
-(NSImage *)imageForMenu;
-(long long)scopeForUI;
-(NSImage *)tokenImage;
-(NSString *)tokenTitle;
-(id)_accessibilityDisplayName;
-(NSString *)suggestionDebugDescription;
-(void)setCategory:(SGTCategory *)arg1 ;
-(SGTCategory *)category;
@end

