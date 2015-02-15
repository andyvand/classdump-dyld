/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:15:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Xcode.app/Contents/Applications/Instruments.app/Contents/Frameworks/DVTInstrumentsFoundation.framework/Versions/A/Resources/LeakAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <DTXConnectionServices/DTXService.h>
#import <LeakAgent/LeakAgentProtocol.h>

@class NSString;

@interface LeakAgent : DTXService <LeakAgentProtocol> {

	int _targetPid;
	unsigned _targetTask;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)faultedTaskPort;
-(id)leakDataWithOptions:(id)arg1 ;
-(void)setTargetTaskPort:(unsigned)arg1 ;
-(id)initWithTargetPid:(unsigned)arg1 ;
@end
