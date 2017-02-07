/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKSCNRenderer : NSObject {
    float  _backingScaleFactor;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _bounds;
    BOOL  _disableInput;
    float  _fps;
    int  _frames;
    BOOL  _hasRenderedForCurrentUpdate;
    BOOL  _hasRenderedOnce;
    BOOL  _isInTransition;
    float  _prevBackingScaleFactor;
    unsigned int  _prevSpritesRendered;
    unsigned int  _prevSpritesRenderedSubmitted;
    float  _prevViewAspect;
    SKScene * _scene;
    struct SKCRenderer { id x1; struct shared_ptr<SKCRenderPass> { struct SKCRenderPass {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; unsigned int x3; struct shared_ptr<jet_command_buffer> { struct jet_command_buffer {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; struct list<std::__1::shared_ptr<SKCRenderPass>, std::__1::allocator<std::__1::shared_ptr<SKCRenderPass> > > { struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> { struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> {} *x_1_2_1; struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> {} *x_1_2_2; } x_5_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<SKCRenderPass>, void *> > > { unsigned long x_2_2_1; } x_5_1_2; } x5; struct { unsigned int x_6_1_1; unsigned int x_6_1_2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_2_1[4]; } ***x_6_1_3; } x6; } * _skcRenderer;
    unsigned int  _spritesRendered;
    unsigned int  _spritesSubmitted;
    SKLabelNode * _statsLabel;
    double  _timeBeginFrameCount;
    double  _timePreviousUpdate;
    NSMutableDictionary * _viewRenderOptions;
    BOOL  showsFPS;
    BOOL  showsNodeCount;
}

@property (nonatomic) float backingScaleFactor;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property (nonatomic) BOOL ignoresSiblingOrder;
@property (nonatomic, retain) SKScene *scene;
@property (nonatomic) BOOL showsDrawCount;
@property (nonatomic) BOOL showsFPS;
@property (nonatomic) BOOL showsFields;
@property (nonatomic) BOOL showsNodeCount;
@property (nonatomic) BOOL showsPhysics;

+ (int)getOpenGLFramebuffer:(id)arg1;
+ (id)rendererWithContext:(id)arg1 options:(id)arg2;
+ (id)rendererWithDevice:(id)arg1 options:(id)arg2;
+ (void)restoreDefaultOpenGLState:(id)arg1 frameBuffer:(int)arg2;
+ (void)setPrefersOpenGL:(BOOL)arg1;

- (void).cxx_destruct;
- (float)_fps;
- (void)_getDestBounds;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })_getMatrix;
- (id)_getOptions;
- (void)_getViewport;
- (void)_initialize;
- (id)_scene;
- (BOOL)_shouldCenterStats;
- (void)_showAllStats;
- (BOOL)_showsCPUStats;
- (BOOL)_showsCoreAnimationFPS;
- (BOOL)_showsCulledNodesInNodeCount;
- (BOOL)_showsGPUStats;
- (BOOL)_showsOutlineInterior;
- (BOOL)_showsSpriteBounds;
- (BOOL)_showsTotalAreaRendered;
- (int)_spriteRenderCount;
- (int)_spriteSubmitCount;
- (void)_update:(double)arg1;
- (float)backingScaleFactor;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (BOOL)ignoresSiblingOrder;
- (id)init;
- (id)initWithSKCRenderer:(struct SKCRenderer { id x1; struct shared_ptr<SKCRenderPass> { struct SKCRenderPass {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; unsigned int x3; struct shared_ptr<jet_command_buffer> { struct jet_command_buffer {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; struct list<std::__1::shared_ptr<SKCRenderPass>, std::__1::allocator<std::__1::shared_ptr<SKCRenderPass> > > { struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> { struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> {} *x_1_2_1; struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> {} *x_1_2_2; } x_5_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<SKCRenderPass>, void *> > > { unsigned long x_2_2_1; } x_5_1_2; } x5; struct { unsigned int x_6_1_1; unsigned int x_6_1_2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_2_1[4]; } ***x_6_1_3; } x6; }*)arg1;
- (struct CGSize { float x1; float x2; })pixelSize;
- (void)render:(BOOL)arg1;
- (void)renderToFramebuffer:(int)arg1 shouldClear:(BOOL)arg2;
- (void)renderToTexture:(id)arg1 commandQueue:(id)arg2;
- (void)renderTransition:(id)arg1 toFramebuffer:(int)arg2 withInputTexture:(unsigned int)arg3 outputTexture:(unsigned int)arg4 inputTextureSize:(struct CGSize { float x1; float x2; })arg5 outputTextureSize:(struct CGSize { float x1; float x2; })arg6 time:(float)arg7;
- (void)renderTransition:(id)arg1 withInputTexture:(unsigned int)arg2 outputTexture:(unsigned int)arg3 inputTextureSize:(struct CGSize { float x1; float x2; })arg4 outputTextureSize:(struct CGSize { float x1; float x2; })arg5 time:(float)arg6;
- (void)renderTransition:(id)arg1 withInputTexture:(id)arg2 outputTexture:(id)arg3 time:(float)arg4 encoder:(id)arg5 pass:(id)arg6 commandQueue:(id)arg7;
- (void)renderWithEncoder:(id)arg1 pass:(id)arg2 commandQueue:(id)arg3;
- (id)scene;
- (void)setBackingScaleFactor:(float)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setIgnoresSiblingOrder:(BOOL)arg1;
- (void)setScene:(id)arg1;
- (void)setShowsDrawCount:(BOOL)arg1;
- (void)setShowsFPS:(BOOL)arg1;
- (void)setShowsFields:(BOOL)arg1;
- (void)setShowsNodeCount:(BOOL)arg1;
- (void)setShowsPhysics:(BOOL)arg1;
- (void)setShowsQuadCount:(BOOL)arg1;
- (void)setShowsSpriteBounds:(BOOL)arg1;
- (void)set_shouldCenterStats:(BOOL)arg1;
- (void)set_showsCPUStats:(BOOL)arg1;
- (void)set_showsCoreAnimationFPS:(BOOL)arg1;
- (void)set_showsCulledNodesInNodeCount:(BOOL)arg1;
- (void)set_showsGPUStats:(BOOL)arg1;
- (void)set_showsOutlineInterior:(BOOL)arg1;
- (void)set_showsSpriteBounds:(BOOL)arg1;
- (void)set_showsTotalAreaRendered:(BOOL)arg1;
- (void)settingsForTransition:(id)arg1 atTime:(float)arg2 renderIncomingToTexture:(BOOL*)arg3 renderOutgoingToTexture:(BOOL*)arg4 renderIncomingToScreen:(BOOL*)arg5 renderOutgoingToScreen:(BOOL*)arg6;
- (void)setupContext;
- (BOOL)showsDrawCount;
- (BOOL)showsFPS;
- (BOOL)showsFields;
- (BOOL)showsNodeCount;
- (BOOL)showsPhysics;
- (BOOL)showsQuadCount;
- (BOOL)showsSpriteBounds;
- (void)updateAtTime:(double)arg1;

@end
