/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface CALSoundFileManager : NSObject {

	NSMutableArray* _soundFiles;

}
+(id)sharedCALSoundFileManager;
+(void)initialize;
-(id)soundFileAtIndex:(long long)arg1 ;
-(void)addCALSoundFilesFromDirectory:(id)arg1 asType:(int)arg2 ;
-(void)sortByName;
-(void)findCALSoundFiles;
-(id)init;
-(long long)count;
@end

