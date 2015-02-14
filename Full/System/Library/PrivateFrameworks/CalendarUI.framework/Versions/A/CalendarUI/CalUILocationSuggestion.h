/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CalUILocation, NSString;

@interface CalUILocationSuggestion : NSObject {

	char _isGroup;
	CalUILocation* _location;
	NSString* _groupTitle;

}

@property (retain) CalUILocation * location;              //@synthesize location=_location - In the implementation block
@property (retain) NSString * groupTitle;                 //@synthesize groupTitle=_groupTitle - In the implementation block
@property (assign) char isGroup;                          //@synthesize isGroup=_isGroup - In the implementation block
-(void)setIsGroup:(char)arg1 ;
-(void)setGroupTitle:(NSString *)arg1 ;
-(NSString *)groupTitle;
-(id)description;
-(CalUILocation *)location;
-(id)displayString;
-(void)setLocation:(CalUILocation *)arg1 ;
-(char)isGroup;
@end

