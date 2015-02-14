/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface NSStoryboardSegue : NSObject {

	/*^block*/id _performHandler;
	NSString* _identifier;
	id _sourceController;
	id _destinationController;
	id _reserved;

}

@property (copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) id sourceController;                     //@synthesize sourceController=_sourceController - In the implementation block
@property (readonly) id destinationController;                //@synthesize destinationController=_destinationController - In the implementation block
@property (copy) id performHandler;                           //@synthesize performHandler=_performHandler - In the implementation block
+(id)segueWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3 performHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3 ;
-(void)perform;
-(void)setPerformHandler:(id)arg1 ;
-(id)sourceController;
-(id)destinationController;
-(id)performHandler;
@end

