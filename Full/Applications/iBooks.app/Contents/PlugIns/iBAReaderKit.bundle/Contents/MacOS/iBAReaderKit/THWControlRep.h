/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/TSDRep.h>

@interface THWControlRep : TSDRep {

	char _repIsBeingRemoved;

}

@property (nonatomic,readonly) char repIsBeingRemoved;              //@synthesize repIsBeingRemoved=_repIsBeingRemoved - In the implementation block
-(void)willBeRemoved;
-(id)controlHostRep;
-(char)repIsBeingRemoved;
-(void)invalidateLayers;
-(void)wasAddedToParent;
-(void)willBeRemovedFromParent;
-(char)directlyManagesLayerContent;
@end

