/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:33:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/SystemProfiler/SPApplicationsReporter.spreporter/Contents/MacOS/SPApplicationsReporter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SPApplicationsReporter/SPApplicationsReporter-Structs.h>
#import <SPSupport/SPReporter.h>

@interface SPApplicationsReporter : SPReporter {

	double _queryStartInterval;

}
-(id)updateDictionary:(id)arg1 ;
-(id)_launchServicesDictionaryForURL:(CFURLRef)arg1 ;
-(id)_dictionaryForItem:(MDItemRef)arg1 ;
-(void)queryProgress:(id)arg1 ;
@end
