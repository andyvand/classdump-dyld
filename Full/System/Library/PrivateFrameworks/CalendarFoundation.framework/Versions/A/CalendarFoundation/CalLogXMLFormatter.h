/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/Versions/A/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarFoundation/CalLogFormatter.h>

@class NSString;

@interface CalLogXMLFormatter : NSObject <CalLogFormatter> {

	char _shouldPrettyPrint;
	char _useTinyElementNames;

}

@property (assign,nonatomic) char shouldPrettyPrint;                //@synthesize shouldPrettyPrint=_shouldPrettyPrint - In the implementation block
@property (assign,nonatomic) char useTinyElementNames;              //@synthesize useTinyElementNames=_useTinyElementNames - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)newFormattedString:(id)arg1 ;
-(char)useTinyElementNames;
-(char)shouldPrettyPrint;
-(void)setShouldPrettyPrint:(char)arg1 ;
-(void)setUseTinyElementNames:(char)arg1 ;
-(id)init;
@end

