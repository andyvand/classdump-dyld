/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/_NSBindingTree.h>

@interface _NSControllerTreeProxy : NSObject <_NSBindingTree> {

	id _controller;

}
-(unsigned long long)count;
-(id)initWithController:(id)arg1 ;
-(id)_valueForKeyPath:(id)arg1 ofObjectAtIndexPath:(id)arg2 ;
-(id)objectAtIndexPath:(id)arg1 ;
-(char)_validateValue:(id*)arg1 forKeyPath:(id)arg2 ofObjectAtIndexPath:(id)arg3 error:(id*)arg4 ;
-(void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndexPath:(id)arg3 ;
-(void)_invokeSelector:(SEL)arg1 withArguments:(id)arg2 onKeyPath:(id)arg3 ofObjectAtIndexPath:(id)arg4 ;
-(unsigned long long)countOfChildNodes;
-(id)descendantNodeAtIndexPath:(id)arg1 ;
-(id)childNodes;
-(id)nodeAtIndexPath:(id)arg1 ;
-(unsigned long long)countForIndexPath:(id)arg1 ;
-(char)isExpandableAtArrangedObjectIndexPath:(id)arg1 ;
-(id)objectInChildNodesAtIndex:(unsigned long long)arg1 ;
@end

