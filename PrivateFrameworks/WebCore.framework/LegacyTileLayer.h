/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface LegacyTileLayer : CALayer {
    unsigned int _paintCount;
    struct LegacyTileGrid { struct LegacyTileCache {} *x1; struct RetainPtr<CALayer> { void *x_2_1_1; } x2; struct IntPoint { int x_3_1_1; int x_3_1_2; } x3; struct IntSize { int x_4_1_1; int x_4_1_2; } x4; float x5; struct HashMap<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile>, WTF::IntPointHash, WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::LegacyTileGridTile> > > { struct HashTable<WebCore::IntPoint, WTF::KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> > >, WTF::IntPointHash, WTF::HashMap<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile>, WTF::IntPointHash, WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::LegacyTileGridTile> > >::KeyValuePairTraits, WTF::HashTraits<WebCore::IntPoint> > { struct KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_6_1_1; } x6; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_7_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_7_1_2; } x7; } *_tileGrid;
}

@property struct LegacyTileGrid { struct LegacyTileCache {} *x1; struct RetainPtr<CALayer> { void *x_2_1_1; } x2; struct IntPoint { int x_3_1_1; int x_3_1_2; } x3; struct IntSize { int x_4_1_1; int x_4_1_2; } x4; float x5; /* Warning: unhandled struct encoding: '{HashMap<WebCore::IntPoint' */ struct x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; BOOL x26; out void*x27; void*x28; void*x29; void*x30; void*x31; long x32; void*x33; void*x34; BOOL x35; out const void*x36; void*x37; int x38; void*x39; BOOL x40; short x41; int x42; struct x43; void*x44; void*x45; void*x46; void*x47; void*x48; unsigned char x49; void*x50; void*x51; void*x52; double x53; int x54; void*x55; void*x56; int x57; void*x58; int x59; in void*x60; void*x61; void*x62; in BOOL x63; void*x64; int x65; out in void*x66; void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; void*x76; void*x77; void*x78; void*x79; void*x80; void*x81; void*x82; void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; void*x93; void*x94; void*x95; void*x96; void*x97; void*x98; void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; void*x109; void*x110; void*x111; void*x112; void*x113; void*x114; void*x115; void*x116; void*x117; void*x118; void*x119; void*x120; void*x121; void*x122; void*x123; void*x124; void*x125; void*x126; void*x127; void*x128; void*x129; void*x130; void*x131; void*x132; void*x133; void*x134; void*x135; void*x136; void*x137; void*x138; void*x139; void*x140; void*x141; void*x142; void*x143; void*x144; void*x145; void*x146; void*x147; void*x148; void*x149; void*x150; void*x151; void*x152; void*x153; void*x154; void*x155; void*x156; void*x157; void*x158; void*x159; void*x160; void*x161; void*x162; void*x163; void*x164; void*x165; void*x166; void*x167; void*x168; void*x169; void*x170; void*x171; void*x172; void*x173; void*x174; void*x175; void*x176; void*x177; void*x178; void*x179; void*x180; }* tileGrid; /* unknown property attribute:  WTF::RefPtr<WebCore::LegacyTileGridTile> >}iiii}}{IntRect={IntPoint=ii}{IntSize=ii}}} */
@property unsigned int paintCount;

+ (id)layerBeingPainted;

- (id)actionForKey:(id)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)layoutSublayers;
- (unsigned int)paintCount;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPaintCount:(unsigned int)arg1;
- (void)setTileGrid:(struct LegacyTileGrid { struct LegacyTileCache {} *x1; struct RetainPtr<CALayer> { void *x_2_1_1; } x2; struct IntPoint { int x_3_1_1; int x_3_1_2; } x3; struct IntSize { int x_4_1_1; int x_4_1_2; } x4; float x5; struct HashMap<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile>, WTF::IntPointHash, WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::LegacyTileGridTile> > > { struct HashTable<WebCore::IntPoint, WTF::KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> > >, WTF::IntPointHash, WTF::HashMap<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile>, WTF::IntPointHash, WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::LegacyTileGridTile> > >::KeyValuePairTraits, WTF::HashTraits<WebCore::IntPoint> > { struct KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_6_1_1; } x6; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_7_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_7_1_2; } x7; }*)arg1;
- (struct LegacyTileGrid { struct LegacyTileCache {} *x1; struct RetainPtr<CALayer> { void *x_2_1_1; } x2; struct IntPoint { int x_3_1_1; int x_3_1_2; } x3; struct IntSize { int x_4_1_1; int x_4_1_2; } x4; float x5; struct HashMap<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile>, WTF::IntPointHash, WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::LegacyTileGridTile> > > { struct HashTable<WebCore::IntPoint, WTF::KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> > >, WTF::IntPointHash, WTF::HashMap<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile>, WTF::IntPointHash, WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::LegacyTileGridTile> > >::KeyValuePairTraits, WTF::HashTraits<WebCore::IntPoint> > { struct KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_6_1_1; } x6; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_7_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_7_1_2; } x7; }*)tileGrid;

@end