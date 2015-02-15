/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary, SGTQueryGenius, SGTCategory, NSURL, NSIndexSet;

@interface SGTSuggestionReserved : NSObject {

	NSString* originalTypedString;
	NSString* rawQueryString;
	NSString* additionalRawQuery;
	NSString* displayName;
	NSString* uniquifierString;
	NSArray* attributeNames;
	NSDictionary* additionalAttributes;
	NSArray* suggestionValues;
	id representedObject;
	SGTQueryGenius* genius;
	long long scope;
	SGTCategory* category;
	NSURL* spotlightScope;
	char additionalRawQueryIsOr;
	char isExactMatch;
	char showsUniquifier;
	char useDefaultScope;
	char intermediateResult;
	char forceLastPosition;
	char enforceStrictMatch;
	NSIndexSet* titleHighlights;
	NSIndexSet* uniquifierHighlights;
	NSString* inputString;
	double score;
	char lastWordMatched;
	unsigned long long alignmentScore;

}
-(void)dealloc;
@end

