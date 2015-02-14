/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class QTMovie, QTInvalidationSet;

@interface QTNode : NSObject {

	int _proxy;
	QTMovie* _movie;
	QTInvalidationSet* _children;
	long long _reserved1;

}
+(id)nodeWithProxy:(int)arg1 ;
-(id)initWithProxy:(int)arg1 ;
-(void)_learnAboutHotspot:(id)arg1 ;
-(void)_forgetAboutHotspot:(id)arg1 ;
-(id)hotspotAtIndex:(int)arg1 ;
-(int)hotspotCount;
-(id)hotspots;
-(id)movie;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id)name;
-(int)index;
-(id)type;
-(int)uniqueID;
-(int)proxy;
-(void)setMovie:(id)arg1 ;
-(id)comments;
@end

