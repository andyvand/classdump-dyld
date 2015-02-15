/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <CalendarUI/CalUIFontSmoothedTextField.h>

@interface CalUIBoxOccurrenceTextField : CalUIFontSmoothedTextField {

	char _cachedIntrinsicContentSizeIsValid;
	CGSize _cachedIntrinsicContentSize;

}

@property (assign) CGSize cachedIntrinsicContentSize;                   //@synthesize cachedIntrinsicContentSize=_cachedIntrinsicContentSize - In the implementation block
@property (assign) char cachedIntrinsicContentSizeIsValid;              //@synthesize cachedIntrinsicContentSizeIsValid=_cachedIntrinsicContentSizeIsValid - In the implementation block
-(void)setCachedIntrinsicContentSizeIsValid:(char)arg1 ;
-(char)cachedIntrinsicContentSizeIsValid;
-(CGSize)cachedIntrinsicContentSize;
-(void)setCachedIntrinsicContentSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)invalidateIntrinsicContentSize;
@end

