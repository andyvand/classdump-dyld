/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/CompletionCell.h>

@interface PasswordGenerationAssistanceCell : CompletionCell {

	PasswordGenerationAssistanceListItem* listItem;

}

@property (assign,nonatomic) PasswordGenerationAssistanceListItem* listItem; 
+(id)_keyImage;
+(id)_topString;
+(id)_topStringAttributesHighlighted:(char)arg1 ;
+(id)_passwordSuggestionStringAttributesHighlighted:(char)arg1 ;
+(double)width;
+(double)height;
-(void)setListItem:(PasswordGenerationAssistanceListItem*)arg1 ;
-(PasswordGenerationAssistanceListItem*)listItem;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
@end

