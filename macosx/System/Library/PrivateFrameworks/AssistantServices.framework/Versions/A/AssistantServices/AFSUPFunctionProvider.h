/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AFSpeakableUtteranceParser.h>
#import <AssistantServices/AFSpeakableNamespaceProvider.h>

@class NSDateFormatter, NSString;

@interface AFSUPFunctionProvider : AFSpeakableUtteranceParser <AFSpeakableNamespaceProvider> {

	NSDateFormatter* _ourFormatter;
	char _useSpeechMode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_shouldAutomaticallyProvideFunctions;
-(void)useSpeechMode:(char)arg1 ;
-(id)stringForExpression:(id)arg1 ;
-(id)_dateFormattedWithFormatter:(id)arg1 arguments:(id)arg2 ;
-(id)_currentTime:(id)arg1 ;
-(id)_currentShortDate:(id)arg1 ;
-(id)_currentLongDate:(id)arg1 ;
-(id)_currentWeekday:(id)arg1 ;
-(id)_tempInWeatherUnits:(id)arg1 ;
-(id)_deviceModel;
-(id)_lowercaseString:(id)arg1 ;
-(id)_callFunction:(id)arg1 withArguments:(id)arg2 ;
-(id)init;
@end

