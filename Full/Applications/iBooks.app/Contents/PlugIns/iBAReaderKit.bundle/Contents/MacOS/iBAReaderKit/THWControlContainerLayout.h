/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/THWContainerLayout.h>
#import <iBAReaderKit/THWControl.h>
#import <iBAReaderKit/TSWPLayoutParentHost.h>

@class NSString;

@interface THWControlContainerLayout : THWContainerLayout <THWControl, TSWPLayoutParentHost>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long tag; 
@property (assign,nonatomic) unsigned long long index; 
-(id)wpLayoutParentForLayout:(id)arg1 ;
-(id)childInfosForLayout;
-(id)additionalLayouts;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setTag:(unsigned long long)arg1 ;
-(unsigned long long)tag;
-(unsigned long long)index;
-(void)validate;
@end
