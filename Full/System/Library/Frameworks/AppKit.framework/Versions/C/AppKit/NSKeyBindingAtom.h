/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSKeyBindingAtom : NSObject {

	unsigned short key;
	unsigned mask;
	id _binding;

}
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(id)binding;
-(long long)compare:(id)arg1 ;
-(id)initWithKey:(unsigned short)arg1 mask:(unsigned long long)arg2 binding:(id)arg3 ;
-(void)setBinding:(id)arg1 ;
@end

