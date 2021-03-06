/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableAttributedString;

@interface CalUILocationContextString : NSObject {

	NSMutableAttributedString* _string;
	double _maxWidth;

}

@property (retain) NSMutableAttributedString * string;              //@synthesize string=_string - In the implementation block
@property (assign) double maxWidth;                                 //@synthesize maxWidth=_maxWidth - In the implementation block
-(id)initWithString:(id)arg1 maxWidth:(double)arg2 ;
-(void)appendDistanceStringWithDistance:(double)arg1 ;
-(void)truncateToWidth:(double)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSMutableAttributedString *)string;
-(void)setString:(NSMutableAttributedString *)arg1 ;
-(double)maxWidth;
-(void)setMaxWidth:(double)arg1 ;
@end

