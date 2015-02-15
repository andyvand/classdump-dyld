/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface NSFileWatcherObservations : NSObject {

	char _attributesChanged;
	char _contentsChanged;
	char _deleted;
	char _moved;
	NSString* _lastObservedPath;
	char _didResetPath;
	NSString* _path;

}
-(void)addAttributeChange;
-(void)addContentsChange;
-(void)addDeletion;
-(void)addDetectedMoveToPath:(id)arg1 ;
-(void)addAnnouncedMoveToPath:(id)arg1 ;
-(void)notifyObserver:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithPath:(id)arg1 ;
@end

