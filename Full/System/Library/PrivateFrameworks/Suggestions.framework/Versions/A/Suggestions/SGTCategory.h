/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SGTCategoryReserved, NSString, NSArray;

@interface SGTCategory : NSObject {

	SGTCategoryReserved* _reserved;

}

@property (readonly) NSString * displayName; 
@property (readonly) unsigned long long position; 
@property (assign) char uniquifiersDrawBelow; 
@property (assign) char showsImagesInMenu; 
@property (assign) char proposesCompletion; 
@property (readonly) NSArray * attributeNamesForRawSuggestion; 
+(id)recentsCategory;
+(id)suggestionsCategory;
+(id)folderCategory;
+(id)othersCategory;
-(void)dealloc;
-(id)description;
-(unsigned long long)position;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)displayName;
-(char)proposesCompletion;
-(char)rawSuggestionShouldCreateToken;
-(char)uniquifiersDrawBelow;
-(char)showsImagesInMenu;
-(id)initWithDisplayName:(id)arg1 position:(unsigned long long)arg2 ;
-(void)setShowsImagesInMenu:(char)arg1 ;
-(void)setProposesCompletion:(char)arg1 ;
-(void)setUniquifiersDrawBelow:(char)arg1 ;
-(id)displayNameForRawSuggestionInMenu:(id)arg1 ;
-(NSArray *)attributeNamesForRawSuggestion;
@end

