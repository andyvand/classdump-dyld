/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:30:10 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSDateFormatter.h>

@class NSString;

@interface CKAutoupdatingDateFormatter : NSDateFormatter {

	NSString* _template;

}

@property (nonatomic,copy) NSString * template;              //@synthesize template=_template - In the implementation block
-(void)dealloc;
-(id)notificationCenter;
-(id)initWithTemplate:(id)arg1 ;
-(void)setTemplate:(id)arg1 ;
-(void)updateDateFormat;
-(id)template;
@end
