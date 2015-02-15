/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:23:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <Calendar/CALCanvasItem.h>

@class NSMutableArray, NSColor, NSMutableDictionary;

@interface CALCanvasGroup : CALCanvasItem {

	NSMutableArray* _items;
	char _clipping;
	NSColor* _backupColor;
	char _groupShadows;
	NSMutableDictionary* _tagsDico;

}
+(id)groupWithTagID:(id)arg1 position:(CGPoint)arg2 size:(CGSize)arg3 canvas:(id)arg4 ;
-(char)isHitByPoint:(CGPoint)arg1 ;
-(void)processMouseMovedForCanvasPoint:(CGPoint)arg1 event:(id)arg2 ;
-(void)processMouseExited:(id)arg1 ;
-(id)initWithTagID:(id)arg1 canvas:(id)arg2 ;
-(id)itemsTouchedByPoint:(CGPoint)arg1 onlySelectableItems:(char)arg2 ;
-(void)registerUpdateRectsIfNeeded;
-(void)_drawWithIntersectionCheck:(char)arg1 ;
-(id)initWithTagID:(id)arg1 position:(CGPoint)arg2 size:(CGSize)arg3 canvas:(id)arg4 ;
-(char)shouldGroupShadows;
-(char)useTagIDDico;
-(void)referenceItem:(id)arg1 ;
-(id)itemForTagID:(id)arg1 recursively:(char)arg2 ;
-(id)itemsInSubTreeForTagID:(id)arg1 recursively:(char)arg2 ;
-(void)updateAffineTransformWithUpdate:(char)arg1 ;
-(void)updateTotalTransform;
-(char)clipping;
-(char)groupShadows;
-(void)_drawShadowWithIntersectionCheck:(char)arg1 ;
-(void)_drawInOpenGLWithIntersectionCheck:(char)arg1 ;
-(void)registerUpdateRectsNow;
-(void)setGroupShadows:(char)arg1 ;
-(void)setClipping:(char)arg1 ;
-(void)setUseTagIDDico:(char)arg1 ;
-(void)removeReference:(id)arg1 ;
-(id)itemForTagID:(id)arg1 ;
-(id)itemsInSubTreeForTagID:(id)arg1 ;
-(void)moveItem:(id)arg1 by:(long long)arg2 ;
-(void)addItem:(id)arg1 before:(id)arg2 ;
-(void)addItem:(id)arg1 after:(id)arg2 ;
-(void)addItemFirst:(id)arg1 ;
-(void)_drawInCGGLWithIntersectionCheck:(char)arg1 ;
-(void)setNeedsUpdate;
-(void)setCanvas:(id)arg1 ;
-(id)canvas;
-(void)dealloc;
-(CGRect)bounds;
-(id)items;
-(void)removeAllItems;
-(void)addItem:(id)arg1 ;
-(void)removeItem:(id)arg1 ;
@end
