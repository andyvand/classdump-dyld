/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/CompletionCell.h>

@class NSString;

@interface FormCredentialsCompletionCell : CompletionCell {

	NSString* _username;
	NSString* _description;
	double _width;

}
+(id)_usernameStringAttributesHighlighted:(char)arg1 ;
+(id)_descriptionStringAttributesHighlighted:(char)arg1 ;
+(double)_widthOfCellForUsername:(id)arg1 description:(id)arg2 ;
+(double)widthOfCellForUsername:(id)arg1 hostname:(id)arg2 ;
+(double)height;
-(void)_invalidateWidth;
-(double)_cellWidth;
-(void)setUsername:(id)arg1 ;
-(void)setHostname:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
@end

