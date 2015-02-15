/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:15:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Xcode.app/Contents/Applications/Application Loader.app/Contents/Frameworks/ITunesConnectFoundation.framework/ITunesConnectFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MZOperatingSystemUtilities : NSObject
+(id)systemVersionToString:(unsigned long long)arg1 ;
+(int)operatingSystemArchitecture;
+(id)systemVersionAsString;
+(id)cpuArchitecture;
+(long long)compareVersion:(id)arg1 toVersion:(id)arg2 error:(id*)arg3 ;
+(id)operatingSystemDescription;
+(char)isVersion:(id)arg1 lessThanVersion:(id)arg2 error:(id*)arg3 ;
+(char)isVersion:(id)arg1 lessThanOrEqualToVersion:(id)arg2 error:(id*)arg3 ;
+(char)isVersion:(id)arg1 greaterThanVersion:(id)arg2 error:(id*)arg3 ;
+(char)isVersion:(id)arg1 greaterThanOrEqualToVersion:(id)arg2 error:(id*)arg3 ;
+(unsigned long long)systemVersion;
@end
