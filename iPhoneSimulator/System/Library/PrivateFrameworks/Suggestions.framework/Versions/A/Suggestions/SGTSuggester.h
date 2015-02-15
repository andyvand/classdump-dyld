/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SGTSuggesterReserved, SGTQueryGenius, SGTCategory, NSArray;

@interface SGTSuggester : NSObject {

	SGTSuggesterReserved* _reserved;

}

@property (retain) SGTQueryGenius * genius; 
@property (retain) SGTCategory * category; 
@property (readonly) char canHaveStaticSuggestions; 
@property (readonly) NSArray * staticSuggestions; 
+(id)suggestersForFiles;
+(id)suggestersForMails;
+(id)suggestersForMailsWithMailLibraryPath:(id)arg1 ;
+(id)suggestersForContainerAtPath:(id)arg1 ;
-(void)setInput:(id)arg1 ;
-(id)_identifier;
-(id)init;
-(void)dealloc;
-(SGTQueryGenius *)genius;
-(char)canHaveStaticSuggestions;
-(NSArray *)staticSuggestions;
-(id)_staticSuggestionDisplayNames;
-(void)setGenius:(SGTQueryGenius *)arg1 ;
-(id)_suggestionWithDisplayName:(id)arg1 attributeNames:(id)arg2 values:(id)arg3 scope:(long long)arg4 representedObjectAsPlist:(id)arg5 ;
-(void)_searchFieldDidValidateSuggestion:(id)arg1 ;
-(void)setCategory:(SGTCategory *)arg1 ;
-(SGTCategory *)category;
@end

