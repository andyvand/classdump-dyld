/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSCoding.h>

@class NSString, NSStoryboard;

@interface NSStoryboardSegueTemplate : NSObject <NSCoding> {

	NSString* _identifier;
	NSString* _segueClassName;
	NSStoryboard* _storyboard;
	id _controller;
	NSString* _destinationControllerIdentifier;
	char _performOnViewLoad;

}

@property (nonatomic,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) NSStoryboard * storyboard;              //@synthesize storyboard=_storyboard - In the implementation block
@property (assign,nonatomic) id controller;                          //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic) char performOnViewLoad;                 //@synthesize performOnViewLoad=_performOnViewLoad - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)controller;
-(id)defaultSegueClassName;
-(Class)effectiveSegueClass;
-(NSStoryboard *)storyboard;
-(id)segueWithDestinationViewController:(id)arg1 ;
-(id)targetController;
-(void)_perform:(id)arg1 ;
-(void)perform:(id)arg1 ;
-(void)setViewController:(id)arg1 ;
-(void)setController:(id)arg1 ;
-(void)setStoryboard:(NSStoryboard *)arg1 ;
-(char)performOnViewLoad;
-(void)setPerformOnViewLoad:(char)arg1 ;
@end

