/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:42 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/Versions/A/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ICSWriting
@required
-(id)propertiesToIncludeForChecksumVersion:(int)arg1;
-(id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
-(id)propertiesToObscure;
-(void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
-(id)parametersToIncludeForChecksumVersion:(int)arg1;
-(id)parametersToObscure;
-(char)shouldObscureValue;
-(id)ICSStringWithOptions:(unsigned long long)arg1;

@end

