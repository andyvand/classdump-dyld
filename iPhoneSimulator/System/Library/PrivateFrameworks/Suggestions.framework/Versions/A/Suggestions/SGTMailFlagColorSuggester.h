/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Suggestions/SGTSuggester.h>

@class NSArray;

@interface SGTMailFlagColorSuggester : SGTSuggester {

	NSArray* mailFlagColors;

}

@property (copy) NSArray * mailFlagColors; 
+(id)menuFlagColorImageForSuggestion:(id)arg1 ;
+(char)isMailFlagColorRepresentedObject:(id)arg1 ;
+(id)mailFlagColorRepresentedObjectForRepresentedObject:(id)arg1 ;
+(id)flagColorImageForSuggestion:(id)arg1 ;
+(id)flagColorsCategory;
+(id)representedObjectForMailFlagColorRepresentedObject:(id)arg1 ;
+(id)tokenFlagColorImageForSuggestion:(id)arg1 ;
-(void)setInput:(id)arg1 ;
-(void)dealloc;
-(void)setMailFlagColors:(NSArray *)arg1 ;
-(NSArray *)mailFlagColors;
@end

