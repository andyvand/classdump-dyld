/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, NSSet;

@interface PLAnnotationPen : NSObject {

	NSMutableSet* _set;
	id _target;
	SEL _selector;
	id _context;

}

@property (nonatomic,readonly) NSSet * set;              //@synthesize set=_set - In the implementation block
@property (assign,nonatomic) id target;                  //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL selector;               //@synthesize selector=_selector - In the implementation block
@property (assign,nonatomic) id context;                 //@synthesize context=_context - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setTarget:(id)arg1 ;
-(void)setSelector:(SEL)arg1 ;
-(id)set;
-(id)context;
-(id)target;
-(void)setContext:(id)arg1 ;
-(SEL)selector;
-(void)removeAllAnnotations;
-(BOOL)empty;
-(void)removeAnnotations:(id)arg1 ;
-(void)addAnnotations:(id)arg1 ;
-(void)removeAnnotation:(id)arg1 ;
@end
