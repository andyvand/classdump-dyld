/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Application Support/iLifeMediaBrowser/Plug-Ins/iLMBAperture31Plugin.ilmbplugin/Contents/MacOS/iLMBAperture31Plugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLMBAperture31Plugin/ILMediaObjectsProvider.h>

@class ILAperture31Plugin, ILMediaGroup, NSMutableArray, NSCondition, NSDate, NSNumber;

@interface ILAperture31MediaObjectsProvider : NSObject <ILMediaObjectsProvider> {

	ILAperture31Plugin* _plugin;
	ILMediaGroup* _group;
	NSMutableArray* _mediaObjects;
	char _objectsFetched;
	char _objectFetchStarted;
	NSCondition* _objectsFetchedCondition;
	NSDate* _fetchRequestDate;
	NSNumber* _hasVideoMedia;
	NSNumber* _hasAudioMedia;
	NSNumber* _hasImageMedia;

}
-(id)initWithPlugin:(id)arg1 group:(id)arg2 ;
-(void)_signalFetchComplete:(char)arg1 ;
-(void)_gatherObjectsSelector:(id)arg1 ;
-(void)_fetchObjectsSelector:(id)arg1 ;
-(void)_evaluateMediaObjectsWaitUntilCompleted:(char)arg1 ;
-(id)_mediaObjectRequestAsync:(char)arg1 ;
-(id)mediaObjects;
-(void)cancelEvaluation;
-(id)mediaObjectsAsync;
-(void)setMediaObjectsArray:(id)arg1 ;
-(void)addMediaObjects:(id)arg1 ;
-(unsigned long long)mediaObjectCount;
-(char)containsMediaObjectsWithMediaTypeMask:(unsigned long long)arg1 ;
-(void)dealloc;
@end
