// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_ANIMATIONSTATEGRAPH_LULL_H_
#define FLATBUFFERS_GENERATED_ANIMATIONSTATEGRAPH_LULL_H_

#include "flatbuffers/flatbuffers.h"

#include "common_generated.h"
#include "variant_def_generated.h"

namespace lull {

struct FirstAnimationSelectorDef;

struct RandomAnimationSelectorDef;

struct ScriptedAnimationSelectorDef;

struct AnimationSignalDef;

struct AnimationTrackDef;

struct SignalPair;

struct AnimationTransitionDef;

struct AnimationStateDef;

struct AnimationStategraphDef;

/// Union of all animation selectors.
enum AnimationSelectorDef {
  AnimationSelectorDef_NONE = 0,
  AnimationSelectorDef_FirstAnimationSelectorDef = 1,
  AnimationSelectorDef_RandomAnimationSelectorDef = 2,
  AnimationSelectorDef_ScriptedAnimationSelectorDef = 3,
  AnimationSelectorDef_MIN = AnimationSelectorDef_NONE,
  AnimationSelectorDef_MAX = AnimationSelectorDef_ScriptedAnimationSelectorDef
};

inline AnimationSelectorDef (&EnumValuesAnimationSelectorDef())[4] {
  static AnimationSelectorDef values[] = {
    AnimationSelectorDef_NONE,
    AnimationSelectorDef_FirstAnimationSelectorDef,
    AnimationSelectorDef_RandomAnimationSelectorDef,
    AnimationSelectorDef_ScriptedAnimationSelectorDef
  };
  return values;
}

inline const char **EnumNamesAnimationSelectorDef() {
  static const char *names[] = {
    "NONE",
    "FirstAnimationSelectorDef",
    "RandomAnimationSelectorDef",
    "ScriptedAnimationSelectorDef",
    nullptr
  };
  return names;
}

inline const char *EnumNameAnimationSelectorDef(AnimationSelectorDef e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesAnimationSelectorDef()[index];
}

template<typename T> struct AnimationSelectorDefTraits {
  static const AnimationSelectorDef enum_value = AnimationSelectorDef_NONE;
};

template<> struct AnimationSelectorDefTraits<FirstAnimationSelectorDef> {
  static const AnimationSelectorDef enum_value = AnimationSelectorDef_FirstAnimationSelectorDef;
};

template<> struct AnimationSelectorDefTraits<RandomAnimationSelectorDef> {
  static const AnimationSelectorDef enum_value = AnimationSelectorDef_RandomAnimationSelectorDef;
};

template<> struct AnimationSelectorDefTraits<ScriptedAnimationSelectorDef> {
  static const AnimationSelectorDef enum_value = AnimationSelectorDef_ScriptedAnimationSelectorDef;
};

bool VerifyAnimationSelectorDef(flatbuffers::Verifier &verifier, const void *obj, AnimationSelectorDef type);
bool VerifyAnimationSelectorDefVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types);

MANUALLY_ALIGNED_STRUCT(4) SignalPair FLATBUFFERS_FINAL_CLASS {
 private:
  uint32_t from_signal_;
  uint32_t to_signal_;

 public:
  static FLATBUFFERS_CONSTEXPR const char *GetFullyQualifiedName() {
    return "lull.SignalPair";
  }
  SignalPair() {
    memset(this, 0, sizeof(SignalPair));
  }
  SignalPair(const SignalPair &_o) {
    memcpy(this, &_o, sizeof(SignalPair));
  }
  SignalPair(uint32_t _from_signal, uint32_t _to_signal)
      : from_signal_(flatbuffers::EndianScalar(_from_signal)),
        to_signal_(flatbuffers::EndianScalar(_to_signal)) {
  }
  uint32_t from_signal() const {
    return flatbuffers::EndianScalar(from_signal_);
  }
  uint32_t to_signal() const {
    return flatbuffers::EndianScalar(to_signal_);
  }
};
STRUCT_END(SignalPair, 8);

/// Animation selector that picks the first track in a state.
struct FirstAnimationSelectorDef FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  static FLATBUFFERS_CONSTEXPR const char *GetFullyQualifiedName() {
    return "lull.FirstAnimationSelectorDef";
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           verifier.EndTable();
  }
};

struct FirstAnimationSelectorDefBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  explicit FirstAnimationSelectorDefBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  FirstAnimationSelectorDefBuilder &operator=(const FirstAnimationSelectorDefBuilder &);
  flatbuffers::Offset<FirstAnimationSelectorDef> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<FirstAnimationSelectorDef>(end);
    return o;
  }
};

inline flatbuffers::Offset<FirstAnimationSelectorDef> CreateFirstAnimationSelectorDef(
    flatbuffers::FlatBufferBuilder &_fbb) {
  FirstAnimationSelectorDefBuilder builder_(_fbb);
  return builder_.Finish();
}

/// Animation selector that picks a random track in a state.  If the
/// track's selection parameters include a float key named 'weight',
/// the selection will be influenced by the relative weights of the
/// tracks.  If not supplied, the default weight is 1.0.
struct RandomAnimationSelectorDef FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  static FLATBUFFERS_CONSTEXPR const char *GetFullyQualifiedName() {
    return "lull.RandomAnimationSelectorDef";
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           verifier.EndTable();
  }
};

struct RandomAnimationSelectorDefBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  explicit RandomAnimationSelectorDefBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  RandomAnimationSelectorDefBuilder &operator=(const RandomAnimationSelectorDefBuilder &);
  flatbuffers::Offset<RandomAnimationSelectorDef> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<RandomAnimationSelectorDef>(end);
    return o;
  }
};

inline flatbuffers::Offset<RandomAnimationSelectorDef> CreateRandomAnimationSelectorDef(
    flatbuffers::FlatBufferBuilder &_fbb) {
  RandomAnimationSelectorDefBuilder builder_(_fbb);
  return builder_.Finish();
}

/// Animation selector that executes a script to pick a track for a
/// state.
struct ScriptedAnimationSelectorDef FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  static FLATBUFFERS_CONSTEXPR const char *GetFullyQualifiedName() {
    return "lull.ScriptedAnimationSelectorDef";
  }
  enum {
    VT_CODE = 4
  };
  /// Inline lullscript to execute when choosing the track.
  const flatbuffers::String *code() const {
    return GetPointer<const flatbuffers::String *>(VT_CODE);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_CODE) &&
           verifier.Verify(code()) &&
           verifier.EndTable();
  }
};

struct ScriptedAnimationSelectorDefBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_code(flatbuffers::Offset<flatbuffers::String> code) {
    fbb_.AddOffset(ScriptedAnimationSelectorDef::VT_CODE, code);
  }
  explicit ScriptedAnimationSelectorDefBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ScriptedAnimationSelectorDefBuilder &operator=(const ScriptedAnimationSelectorDefBuilder &);
  flatbuffers::Offset<ScriptedAnimationSelectorDef> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ScriptedAnimationSelectorDef>(end);
    return o;
  }
};

inline flatbuffers::Offset<ScriptedAnimationSelectorDef> CreateScriptedAnimationSelectorDef(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> code = 0) {
  ScriptedAnimationSelectorDefBuilder builder_(_fbb);
  builder_.add_code(code);
  return builder_.Finish();
}

inline flatbuffers::Offset<ScriptedAnimationSelectorDef> CreateScriptedAnimationSelectorDefDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *code = nullptr) {
  return lull::CreateScriptedAnimationSelectorDef(
      _fbb,
      code ? _fbb.CreateString(code) : 0);
}

/// An animation window within a single track of animation.
struct AnimationSignalDef FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  static FLATBUFFERS_CONSTEXPR const char *GetFullyQualifiedName() {
    return "lull.AnimationSignalDef";
  }
  enum {
    VT_ID = 4,
    VT_START_TIME_S = 6,
    VT_END_TIME_S = 8,
    VT_ON_ENTER = 10,
    VT_ON_EXIT = 12
  };
  /// The unique name (id) of the signal.
  uint32_t id() const {
    return GetField<uint32_t>(VT_ID, 0);
  }
  /// The start time (in seconds) when the signal is active.
  float start_time_s() const {
    return GetField<float>(VT_START_TIME_S, 0.0f);
  }
  /// The end time (in seconds) when the signal is no longer active.
  float end_time_s() const {
    return GetField<float>(VT_END_TIME_S, 0.0f);
  }
  /// Inline script to execute when entering the signal.
  const flatbuffers::String *on_enter() const {
    return GetPointer<const flatbuffers::String *>(VT_ON_ENTER);
  }
  /// Inline script to execute when exiting the signal.
  const flatbuffers::String *on_exit() const {
    return GetPointer<const flatbuffers::String *>(VT_ON_EXIT);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_ID) &&
           VerifyField<float>(verifier, VT_START_TIME_S) &&
           VerifyField<float>(verifier, VT_END_TIME_S) &&
           VerifyOffset(verifier, VT_ON_ENTER) &&
           verifier.Verify(on_enter()) &&
           VerifyOffset(verifier, VT_ON_EXIT) &&
           verifier.Verify(on_exit()) &&
           verifier.EndTable();
  }
};

struct AnimationSignalDefBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(uint32_t id) {
    fbb_.AddElement<uint32_t>(AnimationSignalDef::VT_ID, id, 0);
  }
  void add_start_time_s(float start_time_s) {
    fbb_.AddElement<float>(AnimationSignalDef::VT_START_TIME_S, start_time_s, 0.0f);
  }
  void add_end_time_s(float end_time_s) {
    fbb_.AddElement<float>(AnimationSignalDef::VT_END_TIME_S, end_time_s, 0.0f);
  }
  void add_on_enter(flatbuffers::Offset<flatbuffers::String> on_enter) {
    fbb_.AddOffset(AnimationSignalDef::VT_ON_ENTER, on_enter);
  }
  void add_on_exit(flatbuffers::Offset<flatbuffers::String> on_exit) {
    fbb_.AddOffset(AnimationSignalDef::VT_ON_EXIT, on_exit);
  }
  explicit AnimationSignalDefBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  AnimationSignalDefBuilder &operator=(const AnimationSignalDefBuilder &);
  flatbuffers::Offset<AnimationSignalDef> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<AnimationSignalDef>(end);
    return o;
  }
};

inline flatbuffers::Offset<AnimationSignalDef> CreateAnimationSignalDef(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t id = 0,
    float start_time_s = 0.0f,
    float end_time_s = 0.0f,
    flatbuffers::Offset<flatbuffers::String> on_enter = 0,
    flatbuffers::Offset<flatbuffers::String> on_exit = 0) {
  AnimationSignalDefBuilder builder_(_fbb);
  builder_.add_on_exit(on_exit);
  builder_.add_on_enter(on_enter);
  builder_.add_end_time_s(end_time_s);
  builder_.add_start_time_s(start_time_s);
  builder_.add_id(id);
  return builder_.Finish();
}

inline flatbuffers::Offset<AnimationSignalDef> CreateAnimationSignalDefDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t id = 0,
    float start_time_s = 0.0f,
    float end_time_s = 0.0f,
    const char *on_enter = nullptr,
    const char *on_exit = nullptr) {
  return lull::CreateAnimationSignalDef(
      _fbb,
      id,
      start_time_s,
      end_time_s,
      on_enter ? _fbb.CreateString(on_enter) : 0,
      on_exit ? _fbb.CreateString(on_exit) : 0);
}

/// An animation track representing a single animation to play.
struct AnimationTrackDef FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  static FLATBUFFERS_CONSTEXPR const char *GetFullyQualifiedName() {
    return "lull.AnimationTrackDef";
  }
  enum {
    VT_ANIMATION = 4,
    VT_PLAYBACK_SPEED = 6,
    VT_SIGNALS = 8,
    VT_SELECTION_PARAMS = 10,
    VT_ANIMATION_CHANNEL = 12
  };
  /// The filename of the animation to load and play.
  const flatbuffers::String *animation() const {
    return GetPointer<const flatbuffers::String *>(VT_ANIMATION);
  }
  /// The speed at which to playback the animation.
  float playback_speed() const {
    return GetField<float>(VT_PLAYBACK_SPEED, 1.0f);
  }
  /// The collection of signals associated with the track.
  const flatbuffers::Vector<flatbuffers::Offset<AnimationSignalDef>> *signals() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<AnimationSignalDef>> *>(VT_SIGNALS);
  }
  /// The parameters associated with the animation that can be used in
  /// conjunction with the owning state's selector to pick this track.
  const VariantMapDef *selection_params() const {
    return GetPointer<const VariantMapDef *>(VT_SELECTION_PARAMS);
  }
  /// The channel to use for animations.  Defaults to "render-rig".
  uint32_t animation_channel() const {
    return GetField<uint32_t>(VT_ANIMATION_CHANNEL, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_ANIMATION) &&
           verifier.Verify(animation()) &&
           VerifyField<float>(verifier, VT_PLAYBACK_SPEED) &&
           VerifyOffset(verifier, VT_SIGNALS) &&
           verifier.Verify(signals()) &&
           verifier.VerifyVectorOfTables(signals()) &&
           VerifyOffset(verifier, VT_SELECTION_PARAMS) &&
           verifier.VerifyTable(selection_params()) &&
           VerifyField<uint32_t>(verifier, VT_ANIMATION_CHANNEL) &&
           verifier.EndTable();
  }
};

struct AnimationTrackDefBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_animation(flatbuffers::Offset<flatbuffers::String> animation) {
    fbb_.AddOffset(AnimationTrackDef::VT_ANIMATION, animation);
  }
  void add_playback_speed(float playback_speed) {
    fbb_.AddElement<float>(AnimationTrackDef::VT_PLAYBACK_SPEED, playback_speed, 1.0f);
  }
  void add_signals(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<AnimationSignalDef>>> signals) {
    fbb_.AddOffset(AnimationTrackDef::VT_SIGNALS, signals);
  }
  void add_selection_params(flatbuffers::Offset<VariantMapDef> selection_params) {
    fbb_.AddOffset(AnimationTrackDef::VT_SELECTION_PARAMS, selection_params);
  }
  void add_animation_channel(uint32_t animation_channel) {
    fbb_.AddElement<uint32_t>(AnimationTrackDef::VT_ANIMATION_CHANNEL, animation_channel, 0);
  }
  explicit AnimationTrackDefBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  AnimationTrackDefBuilder &operator=(const AnimationTrackDefBuilder &);
  flatbuffers::Offset<AnimationTrackDef> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<AnimationTrackDef>(end);
    return o;
  }
};

inline flatbuffers::Offset<AnimationTrackDef> CreateAnimationTrackDef(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> animation = 0,
    float playback_speed = 1.0f,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<AnimationSignalDef>>> signals = 0,
    flatbuffers::Offset<VariantMapDef> selection_params = 0,
    uint32_t animation_channel = 0) {
  AnimationTrackDefBuilder builder_(_fbb);
  builder_.add_animation_channel(animation_channel);
  builder_.add_selection_params(selection_params);
  builder_.add_signals(signals);
  builder_.add_playback_speed(playback_speed);
  builder_.add_animation(animation);
  return builder_.Finish();
}

inline flatbuffers::Offset<AnimationTrackDef> CreateAnimationTrackDefDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *animation = nullptr,
    float playback_speed = 1.0f,
    const std::vector<flatbuffers::Offset<AnimationSignalDef>> *signals = nullptr,
    flatbuffers::Offset<VariantMapDef> selection_params = 0,
    uint32_t animation_channel = 0) {
  return lull::CreateAnimationTrackDef(
      _fbb,
      animation ? _fbb.CreateString(animation) : 0,
      playback_speed,
      signals ? _fbb.CreateVector<flatbuffers::Offset<AnimationSignalDef>>(*signals) : 0,
      selection_params,
      animation_channel);
}

/// A transition between two states within the stategraph.
struct AnimationTransitionDef FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  static FLATBUFFERS_CONSTEXPR const char *GetFullyQualifiedName() {
    return "lull.AnimationTransitionDef";
  }
  enum {
    VT_TO_STATE = 4,
    VT_ACTIVE_TIME_FROM_END_S = 6,
    VT_ACTIVE_FOR_ENTIRE_TIME = 8,
    VT_BLEND_TIME_S = 10,
    VT_SIGNALS = 12
  };
  /// The name (id) of the destination/target state.
  uint32_t to_state() const {
    return GetField<uint32_t>(VT_TO_STATE, 0);
  }
  /// The time before the end of the animation at which this transition is
  /// valid.
  float active_time_from_end_s() const {
    return GetField<float>(VT_ACTIVE_TIME_FROM_END_S, 0.0f);
  }
  /// Whether or not the transition is valid for the entire duration of the
  /// animation.
  bool active_for_entire_time() const {
    return GetField<uint8_t>(VT_ACTIVE_FOR_ENTIRE_TIME, 0) != 0;
  }
  /// The time to blend between the source animation and the target animation.
  float blend_time_s() const {
    return GetField<float>(VT_BLEND_TIME_S, 0.0f);
  }
  /// Signals used to indicate valid state transitions. The "from_signal" is the
  /// signal within the current state that indicates that the transition is
  /// active. The "to_signal" is the signal in the target state to enter.
  const flatbuffers::Vector<const SignalPair *> *signals() const {
    return GetPointer<const flatbuffers::Vector<const SignalPair *> *>(VT_SIGNALS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_TO_STATE) &&
           VerifyField<float>(verifier, VT_ACTIVE_TIME_FROM_END_S) &&
           VerifyField<uint8_t>(verifier, VT_ACTIVE_FOR_ENTIRE_TIME) &&
           VerifyField<float>(verifier, VT_BLEND_TIME_S) &&
           VerifyOffset(verifier, VT_SIGNALS) &&
           verifier.Verify(signals()) &&
           verifier.EndTable();
  }
};

struct AnimationTransitionDefBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_to_state(uint32_t to_state) {
    fbb_.AddElement<uint32_t>(AnimationTransitionDef::VT_TO_STATE, to_state, 0);
  }
  void add_active_time_from_end_s(float active_time_from_end_s) {
    fbb_.AddElement<float>(AnimationTransitionDef::VT_ACTIVE_TIME_FROM_END_S, active_time_from_end_s, 0.0f);
  }
  void add_active_for_entire_time(bool active_for_entire_time) {
    fbb_.AddElement<uint8_t>(AnimationTransitionDef::VT_ACTIVE_FOR_ENTIRE_TIME, static_cast<uint8_t>(active_for_entire_time), 0);
  }
  void add_blend_time_s(float blend_time_s) {
    fbb_.AddElement<float>(AnimationTransitionDef::VT_BLEND_TIME_S, blend_time_s, 0.0f);
  }
  void add_signals(flatbuffers::Offset<flatbuffers::Vector<const SignalPair *>> signals) {
    fbb_.AddOffset(AnimationTransitionDef::VT_SIGNALS, signals);
  }
  explicit AnimationTransitionDefBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  AnimationTransitionDefBuilder &operator=(const AnimationTransitionDefBuilder &);
  flatbuffers::Offset<AnimationTransitionDef> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<AnimationTransitionDef>(end);
    return o;
  }
};

inline flatbuffers::Offset<AnimationTransitionDef> CreateAnimationTransitionDef(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t to_state = 0,
    float active_time_from_end_s = 0.0f,
    bool active_for_entire_time = false,
    float blend_time_s = 0.0f,
    flatbuffers::Offset<flatbuffers::Vector<const SignalPair *>> signals = 0) {
  AnimationTransitionDefBuilder builder_(_fbb);
  builder_.add_signals(signals);
  builder_.add_blend_time_s(blend_time_s);
  builder_.add_active_time_from_end_s(active_time_from_end_s);
  builder_.add_to_state(to_state);
  builder_.add_active_for_entire_time(active_for_entire_time);
  return builder_.Finish();
}

inline flatbuffers::Offset<AnimationTransitionDef> CreateAnimationTransitionDefDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t to_state = 0,
    float active_time_from_end_s = 0.0f,
    bool active_for_entire_time = false,
    float blend_time_s = 0.0f,
    const std::vector<const SignalPair *> *signals = nullptr) {
  return lull::CreateAnimationTransitionDef(
      _fbb,
      to_state,
      active_time_from_end_s,
      active_for_entire_time,
      blend_time_s,
      signals ? _fbb.CreateVector<const SignalPair *>(*signals) : 0);
}

/// A single animation state within a stategraph.
struct AnimationStateDef FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  static FLATBUFFERS_CONSTEXPR const char *GetFullyQualifiedName() {
    return "lull.AnimationStateDef";
  }
  enum {
    VT_ID = 4,
    VT_SELECTOR_TYPE = 6,
    VT_SELECTOR = 8,
    VT_TRACKS = 10,
    VT_TRANSITIONS = 12,
    VT_DEFAULT_TRANSITION_INDEX = 14
  };
  /// The unique name (id) of the state.
  uint32_t id() const {
    return GetField<uint32_t>(VT_ID, 0);
  }
  AnimationSelectorDef selector_type() const {
    return static_cast<AnimationSelectorDef>(GetField<uint8_t>(VT_SELECTOR_TYPE, 0));
  }
  /// The selector to use to pick a track when entering the state.
  const void *selector() const {
    return GetPointer<const void *>(VT_SELECTOR);
  }
  template<typename T> const T *selector_as() const;
  const FirstAnimationSelectorDef *selector_as_FirstAnimationSelectorDef() const {
    return selector_type() == AnimationSelectorDef_FirstAnimationSelectorDef ? static_cast<const FirstAnimationSelectorDef *>(selector()) : nullptr;
  }
  const RandomAnimationSelectorDef *selector_as_RandomAnimationSelectorDef() const {
    return selector_type() == AnimationSelectorDef_RandomAnimationSelectorDef ? static_cast<const RandomAnimationSelectorDef *>(selector()) : nullptr;
  }
  const ScriptedAnimationSelectorDef *selector_as_ScriptedAnimationSelectorDef() const {
    return selector_type() == AnimationSelectorDef_ScriptedAnimationSelectorDef ? static_cast<const ScriptedAnimationSelectorDef *>(selector()) : nullptr;
  }
  /// The list of tracks associated with the state.
  const flatbuffers::Vector<flatbuffers::Offset<AnimationTrackDef>> *tracks() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<AnimationTrackDef>> *>(VT_TRACKS);
  }
  /// The transitions exiting this state to enter the next state.
  const flatbuffers::Vector<flatbuffers::Offset<AnimationTransitionDef>> *transitions() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<AnimationTransitionDef>> *>(VT_TRANSITIONS);
  }
  /// Index of the default transition, which occurs automatically when
  /// the current animation ends.
  uint32_t default_transition_index() const {
    return GetField<uint32_t>(VT_DEFAULT_TRANSITION_INDEX, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_ID) &&
           VerifyField<uint8_t>(verifier, VT_SELECTOR_TYPE) &&
           VerifyOffset(verifier, VT_SELECTOR) &&
           VerifyAnimationSelectorDef(verifier, selector(), selector_type()) &&
           VerifyOffset(verifier, VT_TRACKS) &&
           verifier.Verify(tracks()) &&
           verifier.VerifyVectorOfTables(tracks()) &&
           VerifyOffset(verifier, VT_TRANSITIONS) &&
           verifier.Verify(transitions()) &&
           verifier.VerifyVectorOfTables(transitions()) &&
           VerifyField<uint32_t>(verifier, VT_DEFAULT_TRANSITION_INDEX) &&
           verifier.EndTable();
  }
};

template<> inline const FirstAnimationSelectorDef *AnimationStateDef::selector_as<FirstAnimationSelectorDef>() const {
  return selector_as_FirstAnimationSelectorDef();
}

template<> inline const RandomAnimationSelectorDef *AnimationStateDef::selector_as<RandomAnimationSelectorDef>() const {
  return selector_as_RandomAnimationSelectorDef();
}

template<> inline const ScriptedAnimationSelectorDef *AnimationStateDef::selector_as<ScriptedAnimationSelectorDef>() const {
  return selector_as_ScriptedAnimationSelectorDef();
}

struct AnimationStateDefBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(uint32_t id) {
    fbb_.AddElement<uint32_t>(AnimationStateDef::VT_ID, id, 0);
  }
  void add_selector_type(AnimationSelectorDef selector_type) {
    fbb_.AddElement<uint8_t>(AnimationStateDef::VT_SELECTOR_TYPE, static_cast<uint8_t>(selector_type), 0);
  }
  void add_selector(flatbuffers::Offset<void> selector) {
    fbb_.AddOffset(AnimationStateDef::VT_SELECTOR, selector);
  }
  void add_tracks(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<AnimationTrackDef>>> tracks) {
    fbb_.AddOffset(AnimationStateDef::VT_TRACKS, tracks);
  }
  void add_transitions(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<AnimationTransitionDef>>> transitions) {
    fbb_.AddOffset(AnimationStateDef::VT_TRANSITIONS, transitions);
  }
  void add_default_transition_index(uint32_t default_transition_index) {
    fbb_.AddElement<uint32_t>(AnimationStateDef::VT_DEFAULT_TRANSITION_INDEX, default_transition_index, 0);
  }
  explicit AnimationStateDefBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  AnimationStateDefBuilder &operator=(const AnimationStateDefBuilder &);
  flatbuffers::Offset<AnimationStateDef> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<AnimationStateDef>(end);
    return o;
  }
};

inline flatbuffers::Offset<AnimationStateDef> CreateAnimationStateDef(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t id = 0,
    AnimationSelectorDef selector_type = AnimationSelectorDef_NONE,
    flatbuffers::Offset<void> selector = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<AnimationTrackDef>>> tracks = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<AnimationTransitionDef>>> transitions = 0,
    uint32_t default_transition_index = 0) {
  AnimationStateDefBuilder builder_(_fbb);
  builder_.add_default_transition_index(default_transition_index);
  builder_.add_transitions(transitions);
  builder_.add_tracks(tracks);
  builder_.add_selector(selector);
  builder_.add_id(id);
  builder_.add_selector_type(selector_type);
  return builder_.Finish();
}

inline flatbuffers::Offset<AnimationStateDef> CreateAnimationStateDefDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t id = 0,
    AnimationSelectorDef selector_type = AnimationSelectorDef_NONE,
    flatbuffers::Offset<void> selector = 0,
    const std::vector<flatbuffers::Offset<AnimationTrackDef>> *tracks = nullptr,
    const std::vector<flatbuffers::Offset<AnimationTransitionDef>> *transitions = nullptr,
    uint32_t default_transition_index = 0) {
  return lull::CreateAnimationStateDef(
      _fbb,
      id,
      selector_type,
      selector,
      tracks ? _fbb.CreateVector<flatbuffers::Offset<AnimationTrackDef>>(*tracks) : 0,
      transitions ? _fbb.CreateVector<flatbuffers::Offset<AnimationTransitionDef>>(*transitions) : 0,
      default_transition_index);
}

/// An animation stategraph which is a collection of animation states.
struct AnimationStategraphDef FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  static FLATBUFFERS_CONSTEXPR const char *GetFullyQualifiedName() {
    return "lull.AnimationStategraphDef";
  }
  enum {
    VT_STATES = 4
  };
  /// Collection of states associated with the stategraph.
  const flatbuffers::Vector<flatbuffers::Offset<AnimationStateDef>> *states() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<AnimationStateDef>> *>(VT_STATES);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_STATES) &&
           verifier.Verify(states()) &&
           verifier.VerifyVectorOfTables(states()) &&
           verifier.EndTable();
  }
};

struct AnimationStategraphDefBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_states(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<AnimationStateDef>>> states) {
    fbb_.AddOffset(AnimationStategraphDef::VT_STATES, states);
  }
  explicit AnimationStategraphDefBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  AnimationStategraphDefBuilder &operator=(const AnimationStategraphDefBuilder &);
  flatbuffers::Offset<AnimationStategraphDef> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<AnimationStategraphDef>(end);
    return o;
  }
};

inline flatbuffers::Offset<AnimationStategraphDef> CreateAnimationStategraphDef(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<AnimationStateDef>>> states = 0) {
  AnimationStategraphDefBuilder builder_(_fbb);
  builder_.add_states(states);
  return builder_.Finish();
}

inline flatbuffers::Offset<AnimationStategraphDef> CreateAnimationStategraphDefDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<AnimationStateDef>> *states = nullptr) {
  return lull::CreateAnimationStategraphDef(
      _fbb,
      states ? _fbb.CreateVector<flatbuffers::Offset<AnimationStateDef>>(*states) : 0);
}

inline bool VerifyAnimationSelectorDef(flatbuffers::Verifier &verifier, const void *obj, AnimationSelectorDef type) {
  switch (type) {
    case AnimationSelectorDef_NONE: {
      return true;
    }
    case AnimationSelectorDef_FirstAnimationSelectorDef: {
      auto ptr = reinterpret_cast<const FirstAnimationSelectorDef *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case AnimationSelectorDef_RandomAnimationSelectorDef: {
      auto ptr = reinterpret_cast<const RandomAnimationSelectorDef *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case AnimationSelectorDef_ScriptedAnimationSelectorDef: {
      auto ptr = reinterpret_cast<const ScriptedAnimationSelectorDef *>(obj);
      return verifier.VerifyTable(ptr);
    }
    default: return false;
  }
}

inline bool VerifyAnimationSelectorDefVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types) {
  if (values->size() != types->size()) return false;
  for (flatbuffers::uoffset_t i = 0; i < values->size(); ++i) {
    if (!VerifyAnimationSelectorDef(
        verifier,  values->Get(i), types->GetEnum<AnimationSelectorDef>(i))) {
      return false;
    }
  }
  return true;
}

inline const lull::AnimationStategraphDef *GetAnimationStategraphDef(const void *buf) {
  return flatbuffers::GetRoot<lull::AnimationStategraphDef>(buf);
}

inline bool VerifyAnimationStategraphDefBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<lull::AnimationStategraphDef>(nullptr);
}

inline const char *AnimationStategraphDefExtension() {
  return "stategraph";
}

inline void FinishAnimationStategraphDefBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<lull::AnimationStategraphDef> root) {
  fbb.Finish(root);
}

}  // namespace lull

#endif  // FLATBUFFERS_GENERATED_ANIMATIONSTATEGRAPH_LULL_H_
