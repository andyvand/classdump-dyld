/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <Foundation/NSFormatter.h>

@interface FI_TSizeToFitFormatter : NSFormatter {

	TNSRef<NSDictionary *> _attributes;
	CGSize _size;

}

@property (assign,nonatomic) CGSize size;              //@synthesize size=_size - In the implementation block
-(double)measure:(const TString*)arg1 ;
-(void)updatedSize:(CGSize)arg1 attributes:(id)arg2 ;
-(BOOL)fits:(const TString*)arg1 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(char)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
@end

