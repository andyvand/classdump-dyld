/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/WBSCompletionListItem.h>

@class WBSParsecImageRepresentation, NSURL, NSString, NSNumber, NSArray, NSDictionary;

@interface WBSParsecSearchResult : NSObject <WBSCompletionListItem> {

	WBSParsecImageRepresentation* _icon;
	WBSParsecImageRepresentation* _completionIcon;
	NSURL* _reportProblemURL;
	NSString* _title;
	NSString* _descriptionText;
	NSString* _identifier;
	NSString* _feedbackIdentifier;
	NSString* _urlString;
	NSString* _sectionHeader;
	NSNumber* _iTunesItemIdentifier;
	NSString* _completion;
	unsigned long long _type;
	unsigned long long _minimumRankOfTopHitToSuppressResult;
	NSArray* _supportedStyleOverrides;
	NSDictionary* _styleOverrides;

}

@property (nonatomic,readonly) NSString * title;                                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * descriptionText;                                          //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * feedbackIdentifier;                                       //@synthesize feedbackIdentifier=_feedbackIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * urlString;                                                //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,readonly) NSString * sectionHeader;                                            //@synthesize sectionHeader=_sectionHeader - In the implementation block
@property (nonatomic,readonly) NSNumber * iTunesItemIdentifier;                                     //@synthesize iTunesItemIdentifier=_iTunesItemIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * completion;                                               //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSURL * reportProblemURL; 
@property (nonatomic,readonly) unsigned long long minimumRankOfTopHitToSuppressResult;              //@synthesize minimumRankOfTopHitToSuppressResult=_minimumRankOfTopHitToSuppressResult - In the implementation block
@property (nonatomic,readonly) NSArray * supportedStyleOverrides;                                   //@synthesize supportedStyleOverrides=_supportedStyleOverrides - In the implementation block
@property (nonatomic,readonly) NSDictionary * styleOverrides;                                       //@synthesize styleOverrides=_styleOverrides - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * parsecDomainIdentifier; 
+(Class)replacementClass;
+(void)setReplacementClass:(Class)arg1 ;
+(id)resultWithDictionary:(id)arg1 cache:(id)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(NSString *)urlString;
-(id)completionIconWithSession:(id)arg1 ;
-(NSString *)parsecDomainIdentifier;
-(NSString *)completion;
-(NSURL *)reportProblemURL;
-(id)iconWithSession:(id)arg1 ;
-(NSString *)descriptionText;
-(unsigned long long)minimumRankOfTopHitToSuppressResult;
-(NSString *)sectionHeader;
-(unsigned long long)_constructTypeMaskForTypeString:(id)arg1 ;
-(void)_setStyleOverridesWithDictionary:(id)arg1 ;
-(NSArray *)supportedStyleOverrides;
-(id)_glyphRepresentationsFromGlyphDictionaries:(id)arg1 ;
-(id)_glyphsFromGlyphRepresentations:(id)arg1 withSession:(id)arg2 ;
-(NSString *)feedbackIdentifier;
-(NSNumber *)iTunesItemIdentifier;
-(NSDictionary *)styleOverrides;
-(NSString *)identifier;
-(NSString *)title;
-(unsigned long long)type;
-(id)initWithDictionary:(id)arg1 ;
@end

