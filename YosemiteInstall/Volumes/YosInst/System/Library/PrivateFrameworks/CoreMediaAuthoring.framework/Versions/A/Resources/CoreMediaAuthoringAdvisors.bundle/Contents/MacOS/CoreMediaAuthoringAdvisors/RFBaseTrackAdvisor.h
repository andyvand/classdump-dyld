/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 8:18:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Volumes/YosInst/System/Library/PrivateFrameworks/CoreMediaAuthoring.framework/Versions/A/Resources/CoreMediaAuthoringAdvisors.bundle/Contents/MacOS/CoreMediaAuthoringAdvisors
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class RFAdvisorSettingCollection;

@interface RFBaseTrackAdvisor : NSObject {

	RFAdvisorSettingCollection* theCollection;

}

@property (nonatomic,readonly) RFAdvisorSettingCollection * collection; 
-(void)populateSourceProperties:(id)arg1 ;
-(id)initWithSourceProperties:(id)arg1 ;
-(void)populateTargetProperties:(id)arg1 ;
-(id)copySettingsAsDictionary;
-(RFAdvisorSettingCollection *)collection;
-(id)init;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
@end
