/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QTKit/QTKit-Structs.h>
@interface QTMediaIOGraphUnitDescription : NSObject {

	OpaqueCMIOGraphRef _graph;
	int _graphNode;

}
+(id)graphUnitDescriptionWithGraphNode:(int)arg1 ofGraph:(OpaqueCMIOGraphRef)arg2 ;
-(id)initWithGraphNode:(int)arg1 ofGraph:(OpaqueCMIOGraphRef)arg2 ;
-(int)graphNode;
-(void)setGraphNode:(int)arg1 ;
-(char)getNodeFunctionalDesignation:(unsigned*)arg1 nodeIndex:(unsigned*)arg2 error:(id*)arg3 ;
-(OpaqueCMIOGraphRef)graph;
-(void)setGraph:(OpaqueCMIOGraphRef)arg1 ;
@end

