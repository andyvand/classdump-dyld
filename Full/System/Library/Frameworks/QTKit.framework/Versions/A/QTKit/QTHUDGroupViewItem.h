/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <QTKit/NSCoding.h>

@class NSView, QTHUDGroupView;

@interface QTHUDGroupViewItem : NSObject <NSCoding> {

	NSView* _view;
	QTHUDGroupView* _groupView;
	CGSize _minSize;
	CGSize _maxSize;
	void* _observationInfo;
	struct {
		unsigned hidden : 1;
		unsigned reserved : 31;
	}  _flags;
	double _margins[4];

}
+(char)automaticallyNotifiesObserversOfMinSize;
+(char)automaticallyNotifiesObserversOfMaxSize;
+(char)automaticallyNotifiesObserversOfView;
+(char)automaticallyNotifiesObserversOfGroupView;
+(char)automaticallyNotifiesObserversOfHidden;
+(void)initialize;
-(id)groupView;
-(void)setGroupView:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setHidden:(char)arg1 ;
-(char)isHidden;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)view;
-(void)setView:(id)arg1 ;
-(CGSize)maxSize;
-(void)setMinSize:(CGSize)arg1 ;
-(void)setMaxSize:(CGSize)arg1 ;
-(CGSize)minSize;
-(void*)observationInfo;
-(void)setObservationInfo:(void*)arg1 ;
@end

