/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString;


@protocol MKAnnotation <NSObject>
@property (nonatomic,readonly) CGPoint coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@optional
-(void)setCoordinate:(CGPoint)arg1;
-(NSString *)title;
-(NSString *)subtitle;

@required
-(CGPoint)coordinate;

@end

